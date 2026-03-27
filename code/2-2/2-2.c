#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* var0 = "-300";

    int var1 = atoi(var0);
    float var2 = atof(var0);
    int var3 = abs(var1);

    printf("%d %f %d\n", var1, var2, var3);
    return 0;
}
