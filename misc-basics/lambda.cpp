#include <stdio.h>

int main() {

auto x = 4;
auto y = [&r = x, x = x+1]()->int {
            r += 2;
            return x+2;
         }();  // Updates ::x to 6, and initializes y to 7.


printf("x=%d, y=%d\n\r", x, y);
}
