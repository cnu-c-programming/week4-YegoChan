#include <stdio.h>

int main() {
    /* 전체 초기화 */
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    /* 부분 초기화 (나머지는 자동으로 0) */
    int b[5] = {1, 2};

    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    /* 전체 0으로 초기화 */
    int c[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    /* 배열 크기 생략 (컴파일러가 자동으로 크기 결정) */
    int d[] = {10, 20, 30};

    for (int i = 0; i < (sizeof(d) / sizeof(int)); i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}
