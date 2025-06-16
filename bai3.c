#include <stdlib.h>

int* mallocArray(int n ) {
    int* arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}
//do phuc tap O(n)
