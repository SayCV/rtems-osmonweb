/*
 * file: osmonweb_RTEID_onesema.c
 * Do not edit here!
 */
 #include "osmonweb_RTEID_onesema.h"
   const char osmonweb_RTEID_onesema_title[] =
      "\n"
      "<head>\n"
      "<!-- start of document title here -->\n"
      "   <title>RTEMS Classic (RTEID) API Semaphores on "
      "<!--%printstr %s|4 --></title>\n"
      "   <meta http-equiv=\"cache-control\" content=\"no"
      "-cache\">\n"
      "   <meta http-equiv=\"refresh\" content=\"<!--%pri"
      "ntint %d|7-->; URL=/goforms/osmonweb?<!--%printstr"
      " %s|12-->\">\n"
      "<!-- end of document title -->\n"
      "</head>\n"
      "<body>\n"
   ;

   const char osmonweb_RTEID_onesema_header[] =
      "\n"
      "<table border=\"0\" cellspacing=\"0\" cellpadding="
      "\"5\" width=\"100%\">\n"
      "   <tr><td>\n"
      "   <div align=\"center\">\n"
      "   <!-- start of API selection bar -->\n"
      "   <table border=\"0\" cellspacing=\"0\" width=\"1"
      "00%\">\n"
      "      <tr valign=\"center\">\n"
      "      <td width=\"20\">&nbsp;</td>\n"
      "      <td bgcolor=\"#4040ff\" align=\"center\" wid"
      "th=\"200\">\n"
      "         <a href=\"/goforms/osmonweb?api=RTEID\" n"
      "ame=\"RTEID objects\">\n"
      "         <font color=#ffffff size=\"+1\"><b>Classi"
      "c (RTEID) API</b></font>\n"
      "         </a>\n"
      "      </td>\n"
      "      <td width=\"20\">&nbsp;</td>\n"
      "      <td bgcolor=\"#E0E0E0\" align=\"center\" wid"
      "th=\"200\">\n"
      "         <a href=\"/goforms/osmonweb?api=POSIX\" n"
      "ame=\"POSIX objects\">\n"
      "         <font color=\"Black\" size=\"+1\">POSIX A"
      "PI</font>\n"
      "         </a>\n"
      "      </td>\n"
      "      <td width=\"20\">&nbsp;</td>\n"
      "      <td bgcolor=\"#E0E0E0\" align=\"center\" wid"
      "th=\"200\">\n"
      "         <a href=\"/goforms/osmonweb?api=ITRON\" n"
      "ame=\"ITRON objects\">\n"
      "         <font color=\"Black\" size=\"+1\">ITRON A"
      "PI</font>\n"
      "         </a>\n"
      "      </td>\n"
      "      <td width=\"20\">&nbsp;</td>\n"
      "      </tr>\n"
      "      <tr><td colspan=10 bgcolor=\"#4040ff\"><img "
      "width=1 height=1 alt=\"\"></td></tr>\n"
      "   </table>\n"
      "   <!-- end of API selection bar -->\n"
      "\n"
      "   <!-- start of Object selection bar -->\n"
      "   <table border=\"0\"  cellspacing=\"0\" width=\""
      "80%\">\n"
      "      <tr>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#4040ff\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=task\" name=\"RTEID tasks\">\n"
      "            <font color=\"Black\">Tasks</font>\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#8080E0\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=sema\" name=\"RTEID Semaphores\">\n"
      "            <font color=\"#ffffff\"><b>Semaphores<"
      "/b></font>\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#8080E0\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=queue\" name=\"RTEID Message Queues\">\n"
      "            <font color=\"Black\">Message Queues</"
      "font>\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#8080E0\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=rmon\" name=\"RTEID Rate Monotonic Timers"
      "\">\n"
      "            <font color=\"Black\">Rate Monotonic T"
      "imers</font>\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#8080E0\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=part\" name=\"RTEID Partitions\">\n"
      "            <font color=\"Black\">Partitions</font"
      ">\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "         <td bgcolor=\"#8080E0\" align=\"center\" "
      "width=\"200\">\n"
      "            <a href=\"/goforms/osmonweb?api=RTEID&"
      "obj_type=region\" name=\"RTEID Regions\">\n"
      "            <font color=\"Black\">Regions</font>\n"
      "            </a></td>\n"
      "         <td width=\"20\">&nbsp;</td>\n"
      "      </tr>\n"
      "   </table>\n"
      "<!-- end of Object selection bar -->\n"
      "   </div>\n"
      "   </td></tr><tr><td>\n"
      "      <div align=\"center\">\n"
      "<!-- start of document title here -->\n"
      "      <br><h2>Classic (RTEID) API semaphores On Ta"
      "rget <b><font color=\"#4040ff\"><!--%printstr %s|4"
      " --></font></b></h2><br>\n"
      "<!-- end of document title -->\n"
      "      </div>\n"
   ;

   const char osmonweb_RTEID_onesema_tabhead[] =
      "\n"
      "<!-- start of object table -->\n"
      "      <table border=\"1\"width=100%>\n"
      "         <tr valign=\"top\"  bgcolor=\"#bfbfbf\"><"
      "td align=\"center\"><b>\n"
      "               ID</b><br>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=1&sort_select=0\"  name=\""
      "lowest ID first\" >      <IMG src=\"/osmonweb/arro"
      "w-N-S.gif\" width=24 height=24 border=0></a>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=-1&sort_select=0\" name=\""
      "highest ID first\">      <IMG src=\"/osmonweb/arro"
      "w-S-N.gif\" width=24 height=24 border=0></a>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Name</b><br>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=1&sort_select=1\"  name=\""
      "lowest Name first\" >    <IMG src=\"/osmonweb/arro"
      "w-N-S.gif\" width=24 height=24 border=0></a>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=-1&sort_select=1\" name=\""
      "highest Name first\">    <IMG src=\"/osmonweb/arro"
      "w-S-N.gif\" width=24 height=24 border=0></a>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Curr. Count</b><br>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=1&sort_select=6\"  name=\""
      "lowest count first\"    ><IMG src=\"/osmonweb/arro"
      "w-N-S.gif\" width=24 height=24 border=0></a>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=-1&sort_select=6\" name=\""
      "highest count first\"   ><IMG src=\"/osmonweb/arro"
      "w-S-N.gif\" width=24 height=24 border=0></a>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Prio Ceiling</b><br>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=1&sort_select=9\"  name=\""
      "lowest count first\"    ><IMG src=\"/osmonweb/arro"
      "w-N-S.gif\" width=24 height=24 border=0></a>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=-1&sort_select=9\" name=\""
      "highest count first\"   ><IMG src=\"/osmonweb/arro"
      "w-S-N.gif\" width=24 height=24 border=0></a>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Attributes</b><br>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Holder ID</b><br>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=1&sort_select=11\"  name="
      "\"lowest size first\" >    <IMG src=\"/osmonweb/ar"
      "row-N-S.gif\" width=24 height=24 border=0></a>\n"
      "               <a href=\"/goforms/osmonweb?<!--%pr"
      "intstr %s|12-->&sort_dir=-1&sort_select=11\" name="
      "\"highest size first\">    <IMG src=\"/osmonweb/ar"
      "row-S-N.gif\" width=24 height=24 border=0></a>\n"
      "            </td><td align=\"center\"><b>\n"
      "               Control</b><br>\n"
      "         </td></tr>\n"
   ;

   const char osmonweb_RTEID_onesema_tabentry[] =
      "\n"
      "         <tr align=\"right\">\n"
      "            <td><div align=\"center\">\n"
      "               <a href=\"/goforms/osmonweb?api=RTE"
      "ID&obj_type=sema&obj_curr=0x<!--%printint %08x|0--"
      ">\" title=\"Details for 0x<!--%printint %08x|0-->\""
      ">\n"
      "               0x<!--%printint %08x|0-->\n"
      "               </a></div></td>\n"
      "            <td><b><div align=\"center\">\n"
      "               <a href=\"/goforms/osmonweb?api=RTE"
      "ID&obj_type=sema&obj_curr=0x<!--%printint %08x|0--"
      ">\" title=\"Details for <!--%printname %s|1 -->\">"
      "\n"
      "               <code><!--%printname %s|1 --></code"
      ">\n"
      "            </a></div></b></td>\n"
      "            <!-- interpolate color from red (low) "
      "to azur (high) count -->\n"
      "            <td bgcolor=\"<!--%printipol #%02X|6|0"
      "|32|0xFF|0x40--><!--%printipol %02X|6|0|32|0x40|0x"
      "FF--><!--%printipol %02X|6|0|32|0x40|0xFF-->\">\n"
      "               <div align=\"center\"><!--%printint"
      " %8d|6 --></div>\n"
      "            </td>\n"
      "            <td><div align=\"center\"><!--%printin"
      "t %8d|9 --></div></td>\n"
      "          <!-- interpolate color from red (high) t"
      "o azur (low) priority -->\n"
      "            <td><div align=\"center\">0x<!--%print"
      "int %08x|10 --></div></td>\n"
      "            <td><div align=\"center\">\n"
      "               <a href=\"/goforms/osmonweb?api=RTE"
      "ID&obj_type=task&obj_curr=0x<!--%printint %08x|11-"
      "->\" title=\"Details for holder 0x<!--%printint %0"
      "8x|11-->\">\n"
      "               0x<!--%printint %08x|11-->\n"
      "               </a></div></td>\n"
      "            <td align=\"center\"><table border=\"1"
      "\"><tr>\n"
      "               <td align=\"center\"><a href=\"/gof"
      "orms/osmonweb?<!--%printstr %s|15-->&obj_curr=0x<!"
      "--%printint %08x|11-->&action=obtain\"  name=\"obt"
      "ain semaphore\" ><IMG src=\"/osmonweb/obtain.gif\""
      " alt=\"obtain\" width=24 height=24 border=0><br>ob"
      "tain</a></td>\n"
      "               <td align=\"center\"><a href=\"/gof"
      "orms/osmonweb?<!--%printstr %s|15-->&obj_curr=0x<!"
      "--%printint %08x|11-->&action=release\"  name=\"re"
      "lease semaphore\" ><IMG src=\"/osmonweb/release.gi"
      "f\" alt=\"release\" width=24 height=24 border=0><b"
      "r>release</a></td>\n"
      "            </tr></table></td>\n"
      "         </tr>\n"
   ;

   const char osmonweb_RTEID_onesema_tabfoot[] =
      "\n"
      "      </table>\n"
      "<!-- end of object table -->\n"
      "   </td></tr>\n"
      "   <tr><td>\n"
   ;

   const char osmonweb_RTEID_onesema_footer[] =
      "\n"
      "<hr>\n"
      "<!-- start of general display options -->\n"
      "  <h2><div align=\"center\">Display Options</div><"
      "/h2>\n"
      "   <div align=\"center\"><table>\n"
      "      <form action=\"/goforms/osmonweb?<!--%prints"
      "tr %s|12-->&auto_rfsh_enab=0&hdr_rep_enable=0&dumm"
      "y=dummy\" method=\"POST\" enctype=\"application/x-"
      "www-form-urlencoded\">\n"
      "      <tr>\n"
      "         <td><input type=\"checkbox\" <!--%printse"
      "lect %s|6|0xffffffff|||checked--> name=\"auto_rfsh"
      "_enab\" value=\"1\">autorefresh </td>\n"
      "         <td>every <input type=\"text\" name=\"aut"
      "o_rfsh_time\" value=<!--%printint %d|7--> size=10 "
      "maxlength=10> seconds</td>\n"
      "      </tr>\n"
      "      <tr>\n"
      "         <td><input type=\"checkbox\" <!--%printse"
      "lect %s|10|0xffffffff|||checked--> name=\"hdr_rep_"
      "enable\" value=\"1\">repeat header </td>\n"
      "         <td>every <input type=\"text\" name=\"hdr"
      "_rep_cnt\" value=<!--%printint %d|11--> size=3 max"
      "length=3> lines</td>\n"
      "      </tr>\n"
      "      <tr>\n"
      "         <td><input type=\"submit\" name=\"Submit\""
      " value=\"submit\"></td>\n"
      "      </tr></form>\n"
      "   </table></div>\n"
      "<hr>\n"
      "<div align=\"center\"><font size=\"-1\"><font  col"
      "or=\"blue\"><i>osmonweb</i></font> for RTEMS imple"
      "mented by IMD</font><br><IMG src=\"/osmonweb/imdlo"
      "go_sm.jpg\" width=42 height=21 border=0></div>\n"
      "<!-- end of general display options -->\n"
      "    </td></tr>\n"
      "</table>\n"
   ;

   const char osmonweb_RTEID_onesema_trailer[] =
      "\n"
      "</body>\n"
   ;

