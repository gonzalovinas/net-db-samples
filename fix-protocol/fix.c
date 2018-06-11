/* install zmq

        https://gist.github.com/katopz/8b766a5cb0ca96c816658e9407e83d00

  color terminal

      https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal/17469726#17469726
*/

#include "stdio.h"



#include "libtrading/proto/fix_session.h"



int main (int c, char *v[])  {


  struct fix_session_cfg cfg;
  struct fix_session *session;

  fix_session_cfg_init(&cfg);

  session = fix_session_new(&cfg);

  return 0;

}
