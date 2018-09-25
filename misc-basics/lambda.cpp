#include <stdio.h>

auto lambda = [](auto x, auto y) -> auto {return x + y;};


int main() {
        printf("arrancando\n\r");
        auto x = 4;
        auto y = [&r = x, x = x+1](int a, int b)->int {
                    printf("no soy el primer texto que sale\n\r");
                    r += 2;
                    return x+2;
                };  // Updates ::x to 6, and initializes y to 7.

        auto a = 1;
        auto b = 1;
        //printf("a=%d, b=%d\n\r", ++a, a);
        //printf("a=%d, b=%d\n\r", b, ++b);
        
        printf("y=%d, x=%d\n\r", y(1, 2), x);

        printf("y=%d, x=%d\n\r", y(2, 3), x);

        printf("%d", lambda(1, 2));

       
}
