#include <stdio.h>
#include <string.h>

int main() {
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];

    int len = strlen(a);
    printf("length of a: %d\n", len);

    strcpy(c, a);
    printf("a: %s, c: %s\n", a, c);

    strcat(c, " ");
    strcat(c, b);
    printf("c: %s\n", c);

    printf("strcmp(%s, %s) = %d\n", a, a, strcmp(a, a));
    printf("strcmp(%s, %s) = %d\n", a, b, strcmp(a, b));

    return 0;
}
