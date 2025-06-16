#include <stdio.h>
void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main () {
    int arr[] = {1,5,6,8,9,10,22,3,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    sort(arr, n);
    print(arr, n);
    return 0;
}
//do phuc tap thoi gian: O(n*n)
//do phuc tap khong gian 0(1)