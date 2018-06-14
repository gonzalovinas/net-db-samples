#include <iostream>
#include <dlfcn.h>
#include "base_plugin.hpp"

typedef void *(*foo)();

int main() {
   
    

    auto lib_handler = dlopen("./un_plugin.so", RTLD_NOW);
    if(nullptr != lib_handler) {
        std::cout << "cargando modulo..." << std::endl;

        void *init_ptr_fn = dlsym(lib_handler, "init");
        foo p = (foo)(init_ptr_fn);
        if(nullptr != init_ptr_fn) {
            BasePlugin *plugin = (BasePlugin *)init_ptr_fn;
            std::cout << plugin->nombre() << std::endl;
        }

    }
    else {
        std::cout << "error al carga modulo!" << std::endl;
        exit(-1);
    }
}
