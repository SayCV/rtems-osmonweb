/*  Mongoose HTTPD Extensions
 */


#if defined(USE_MONGOOSE_HTTPD)

#include <rtems.h>
#include <stdio.h>
#include <mghttpd/mongoose.h>
#include <rtems/cpuuse.h>
#include <rtems/stackchk.h>

#include <stdio.h>

#include <pthread.h>

#if 1
#define FUNCDBG()  do { \
		printk( \
		"[sayMDK]-> file: %s," \
		" line %d," \
		" function: %s\n", \
		__FILE__, \
		__LINE__, \
		__FUNCTION__ \
		); \
	} while( 0 )
#define FUNCDBG1( fmt, args ... )  do { \
		\
		printk( "[sayMDK]-> " ); \
		printk( fmt, ## args ); \
	} while( 0 )
#define FUNCDBG2( fmt, args ... )  do { \
		FUNCDBG(); \
		printk( "[sayMDK]-> " ); \
		printk( fmt, ## args ); \
	} while( 0 )
#else
#define FUNCDBG()
#define FUNCDBG1( fmt, args ... )
#define FUNCDBG2( fmt, args ... )
#endif

#if defined(DEBUG)
#define DEBUG_TRACE(x) do { \
  flockfile(stdout); \
  printf("*** %lu.%p.%s.%d: ", \
         (unsigned long) time(NULL), (void *) pthread_self(), \
         __func__, __LINE__); \
  printf x; \
  putchar('\n'); \
  fflush(stdout); \
  funlockfile(stdout); \
} while (0)
#else
#define DEBUG_TRACE(x)
#endif // DEBUG

// Various events on which user-defined function is called by Mongoose.
enum mg_event {
  MG_NEW_REQUEST,   // New HTTP request has arrived from the client
  MG_HTTP_ERROR,    // HTTP error must be returned to the client
  MG_EVENT_LOG,     // Mongoose logs an event, request_info.log_message
  MG_INIT_SSL,      // Mongoose initializes SSL. Instead of mg_connection *,
                    // SSL context is passed to the callback function.
  MG_REQUEST_COMPLETE  // Mongoose has finished handling the request
};

#define START_HTML_BODY \
      "HTTP/1.1 200 OK\r\n" \
      "Content-Type: text/html\r\n\r\n" \
      "<html><body>\r\n"

#define END_HTML_BODY \
      "</html></body>\r\n"

void example_mongoose_callback(
  enum mg_event event,
  struct mg_connection         *conn,
  const struct mg_request_info *request_info
)
{
  //const char *query;
  const struct mg_request_info *ri = request_info;
  FUNCDBG();
//if (event == MG_NEW_REQUEST) {
  if (strcmp(ri->uri, "/queries*")) {
  	return ;
  }
  // User has submitted a form, show submitted data and a variable value
  char post_data[1024],
  	input_buf[sizeof(post_data)];
  int post_data_len;
  
  // Read POST data
  post_data_len = mg_read(conn, post_data, sizeof(post_data));
  // Parse form data. input1 and input2 are guaranteed to be NUL-terminated
  mg_get_var(post_data, post_data_len, "action", input_buf, sizeof(input_buf));
  
  //query = mg_get_var(conn->request_info.query_string, (size_t)(&conn->data_len), (const char *)"action", &conn->buf, &conn->buf_size);
  //if ( !query )
  //  query = "";
  /* fprintf( stderr, "RTEMS Request -%s-\n", query ); */
	FUNCDBG();
  mg_printf( conn, START_HTML_BODY "<pre>" );
  if ( !strcmp( input_buf, "cpuuse_report" ) ) {
    rtems_cpu_usage_report_with_plugin(
      conn,
      (rtems_printk_plugin_t) mg_printf
    );
  } else if ( !strcmp( input_buf, "cpuuse_reset" ) ) {
    rtems_cpu_usage_reset();
    mg_printf(
      conn,
      " <p><big>CPU Usage data reset -- return to the previous page</big></p>"
    );
  } else if ( !strcmp( input_buf, "stackuse_report" ) ) {
    rtems_stack_checker_report_usage_with_plugin(
      conn,
      (rtems_printk_plugin_t) mg_printf
    );
  } else {
    mg_get_var(post_data, post_data_len, "REQUEST_URI", input_buf, sizeof(input_buf));
    //mg_get_var(conn.request_info.query_string, conn.data_len, "REQUEST_URI", conn.buf, conn.buf_size);
    mg_printf(
      conn,
      START_HTML_BODY
      " <h2>Unknown Request</h2>"
      " <h3>URI: %s</br>"
      "  Arguments: %s</h3>",
      input_buf,
      "error"
    );
  }
  FUNCDBG();
  mg_printf( conn, "</pre>" END_HTML_BODY );
  /*arg->flags |= SHTTPD_END_OF_OUTPUT; */
}

void example_mongoose_addpages(
  struct mg_context *server
)
{
  //mg_set_uri_callback( server, "/queries*", example_mongoose_callback, NULL );
}

#endif
