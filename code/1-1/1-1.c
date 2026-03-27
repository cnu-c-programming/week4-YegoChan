#include <stdio.h>

extern int foo(int a, int b);

int main() {
    printf("%d\n", foo(1, 2));
    return 0;
}
