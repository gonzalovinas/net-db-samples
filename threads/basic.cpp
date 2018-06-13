#include <string>
#include <iostream>
#include <thread>

void thread_entry(int foo, int bar);

int main() {
    // Elsewhere in some part of the galaxy
    std::thread thread(thread_entry, 5, 10);
    while(true) {
        std::cout << "aA" << std::endl;
    }
        
}



void thread_entry(int foo, int bar)
{
    int result = foo + bar;
    // Do something with that, I guess
    while(true) {
        std::cout << result << std::endl;
    }
}

