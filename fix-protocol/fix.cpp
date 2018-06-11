/* install zmq

        https://gist.github.com/katopz/8b766a5cb0ca96c816658e9407e83d00

  color terminal

      https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal/17469726#17469726
*/

#include "stdio.h"
#include <iostream>

#include <ostream>
#include "libtrading/proto/fix_session.h"
#include "libtrading/proto/fix_message.h"


using namespace std;



namespace Color {
    enum Code {
        FG_RED      = 31,
        FG_GREEN    = 32,
        FG_BLUE     = 34,
        FG_DEFAULT  = 39,
        BG_RED      = 41,
        BG_GREEN    = 42,
        BG_BLUE     = 44,
        BG_DEFAULT  = 49
    };
    class Modifier {
        Code code;
    public:
        Modifier(Code pCode) : code(pCode) {}
        friend std::ostream&
        operator<<(std::ostream& os, const Modifier& mod) {
            return os << "\033[" << mod.code << "m";
        }
    };
}




int main (int c, char *v[])  {
  std::cout << "Initializing...\n\r";

  struct fix_session_cfg cfg;
  struct fix_session *session;

  enum fix_version version = FIX_4_4;

  fix_session_cfg_init(&cfg);

  cfg.dialect	= &fix_dialects[version];

  session = fix_session_new(&cfg);

  if (!session) {
  	fprintf(stderr, "FIX session cannot be created\\n");
  }



  return 0;

}
