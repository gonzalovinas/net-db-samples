 
#include <string>
#include "base_plugin.hpp"

class UnPlugin  : BasePlugin {

    public:
    
            UnPlugin() : BasePlugin() {
            
            }

            ~UnPlugin() {
            }

     public:

            virtual std::string nombre() {
                    return "UnPlugin";
            }
 };


extern "C" void* init() {
        return new UnPlugin();
};
