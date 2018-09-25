/* Processed by ecpg (10.1) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */

#line 1 "basic.epg"
int main() {
{ ECPGconnect(__LINE__, 0, "mydb@sql.mydomain.com" , NULL, NULL , NULL, 0); }
#line 2 "basic.epg"


{ ECPGconnect(__LINE__, 0, "unix:postgresql://localhost/gonza" , "john" , NULL , "myconnection", 0); }
#line 4 "basic.epg"


/* exec sql begin declare section */
    
    

#line 7 "basic.epg"
 const char * target = "mydb@sql.mydomain.com" ;
 
#line 8 "basic.epg"
 const char * user = "john" ;
/* exec sql end declare section */
#line 9 "basic.epg"

 ...
{ ECPGconnect(__LINE__, 0, target , user , NULL , NULL, 0); }
#line 11 "basic.epg"

}
