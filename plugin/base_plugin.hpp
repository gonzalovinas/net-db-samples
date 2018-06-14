 
#include <string>

class BasePlugin  {

    public:
    
            BasePlugin();

            ~BasePlugin();

     public:
     
        virtual std::string nombre() = 0; 
 };

