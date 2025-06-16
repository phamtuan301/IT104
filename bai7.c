#include <stdio.h>
int check(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}
//do phuc tap thoi gian O(n*n)
//do phuc tap khong gian O(1)
int check2(int arr[], int n) {
    int saw[1000] = {0};
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]]) {
            return 1;
        }
        saw[arr[i]] = 1;
    }
    return 0;
}
//do phuc tap thoi gian O(n)
//do phuc tap khong gian O(1)
int main () {
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Mang", check1(arr, n) ? "co trung" : "khong trung")
    return 0;
}