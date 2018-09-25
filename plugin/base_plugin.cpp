 
#include <string>
#include <iostream>

class BasePlugin  {

    public:
    
            BasePlugin() {
                std::cout << "creando plugin.." << std::endl;
            }

            ~BasePlugin() {
                
            }

     public:
     
        virtual std::string nombre()
         {
        }; 
 };

