/* install zmq

        https://gist.github.com/katopz/8b766a5cb0ca96c816658e9407e83d00

  color terminal

      https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal/17469726#17469726
*/

#include "stdio.h"
#include <iostream>

#include <ostream>

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



class MyFuckingObject
{
private:
  static  MyFuckingObject *__instance;

protected:
    MyFuckingObject()
    {
      Color::Modifier active(Color::FG_GREEN);
      Color::Modifier def(Color::FG_DEFAULT);
      std::cout << "A FuckingObject is being " << active << "CREATED" << def << "..."  << endl;

    }
public:
    static MyFuckingObject* newSingletonInstance() {
      if(NULL == MyFuckingObject::__instance) {
        MyFuckingObject::__instance =  new MyFuckingObject();
      }

      return MyFuckingObject::__instance;
    }
};

MyFuckingObject* MyFuckingObject::__instance = NULL;

int main (int c, char *v[])  {
  std::cout << "Initializing...\n\r";
  MyFuckingObject::newSingletonInstance();
}
