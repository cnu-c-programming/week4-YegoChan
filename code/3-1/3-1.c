#include <stdio.h>

int main() {
    int n = 10;

    /* 포인터 변수 p에 n의 주소 대입 */
    int *p = &n;

    /* 주소 출력 */
    printf("address of n: %p\n", p);

    /* 포인터로 값 읽기 */
    printf("*p = %d\n", *p);

    /* 포인터로 값 변경 */
    *p = 99;
    printf("n = %d\n", n);
    return 0;
}
