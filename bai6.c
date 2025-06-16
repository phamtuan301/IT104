#include <stdio.h>
int count(int arr[], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,1,1,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m;
    printf("Nhap phan tu can dem");
    scanf("%d", &m);
    int result = count(arr, n, m);
    printf("phan tu xuat hien %d lan", result);
    return 0;
}
//do phuc tap thoi gian O(n)
//do phuc tap khong gian O(1)