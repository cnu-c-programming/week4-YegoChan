#include <stdio.h>

int main() {
    printf("sizeof(int*) = %zu\n", sizeof(int*));
    printf("sizeof(double*) = %zu\n", sizeof(double*));
    printf("sizeof(char*) = %zu\n", sizeof(char*));
    printf("sizeof(void*) = %zu\n", sizeof(void*));

    return 0;
}
// 전부 8이네?
