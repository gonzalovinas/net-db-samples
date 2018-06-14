#include <iostream>
#include <dlfcn.h>

int main() {

    auto lib_handler = dlopen("./unplugin.so", RTLD_LAZY);
    if(nullptr != lib_handler) {
        std::cout << "cargando modulo..." << std::endl;

        //auto dlsym = dlsym(lib_handler, "ini");


    }
    else {
        std::cout << "error al carga modulo!" << std::endl;
    }
}
