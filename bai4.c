#include <stdio.h>
int sum1(int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum;
}
//do phuc tap O(n)
int sum2(int n) {
    return n * (n + 1) / 2;
}
//do phuc tap O(1)
int main () {
    int n = 10;
    int sumloop = sum1(n);
    int sum = sum2(n);
    printf("sum1 = %d\n", sumloop);
    printf("sum2 = %d\n", sum);
    return 0;
}
