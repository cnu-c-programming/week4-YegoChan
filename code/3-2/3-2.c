#include <stdio.h>

void swap_endian(int *x) {
    char *addr = (char *)x;
    char swapper = *addr;
    
    *addr = *(addr + 3);
    *(addr + 3) = swapper;

    swapper = *(addr + 1);
    *(addr + 1) = *(addr + 2);
    *(addr + 2) = swapper;
}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
