#include <stdio.h>

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < (n-1); i++) {
        void* addr_0 = &(arr[i]);
        void* addr_1 = &(arr[i + 1]);
        /* 서로 인접한 두 요소의 실제 주소 */
        printf("address of arr[%d]: %p\n", i, addr_0);
        printf("address of arr[%d+1]: %p\n", i, addr_1);
        /* 서로 인접한 두 요소의 주소 차이 */
        printf("&(arr[%d]) - &(arr[%d+1]) = %d\n", i, i + 1, (unsigned long long) addr_1 - (unsigned long long) addr_0);
        printf("\n");
    }

    return 0;
}

/*
4바이트씩 차이남. 근데, 이미 %d / %d+1라고 적어놓고 i / i+1을 대입하니까 결과가 이상해짐..
또 arr[%d] - arr[%d+1]이 아니고, arr[%d+1] - arr[%d]가 되어야 할 거 같음..
*/
