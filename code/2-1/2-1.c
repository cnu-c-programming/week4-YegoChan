#include <stdio.h>

int main() {
    const char* date = "2026-03-24";
    char buffer[64];
    int year, month, day;

    sscanf(date, "%d-%d-%d", &year, &month, &day);
    sprintf(buffer, "%d/%d/%d", day, month, year);

    printf("%s\n", buffer);
    return 0;
}
