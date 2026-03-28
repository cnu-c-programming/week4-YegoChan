#include <stdio.h>

int sum(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += arr[i];
    }
    return result;
}

double average(int arr[], int n) {
    double result = sum(arr, n);
    result /= n;
    return result;
}

int max(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > result) {
            result = arr[i];
        }
    }
    return result;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));
    return 0;
}
