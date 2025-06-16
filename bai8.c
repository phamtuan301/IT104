#include <stdio.h>

int find(int arr[], int n) {
    int i, j;
    int max = 0;
    int most = arr[0];
    for (i = 1; i < n; i++) {
        int count = 1;
        int isCount = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                isCount = 1;
                break;
            }
        }
        if (isCount == 1) {
            continue;
        }
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            most = arr[i];
        }
    }
    return most;
}
int main() {
    int arr[] = {1,4,5,4,3,2,3,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = find(arr, n);
    printf("%d", result);
    return 0;
}
//do phuc tap thoi gian O(n*n)
//do phuc tap khong gian O(1)