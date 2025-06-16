#include <stdio.h>
void printDouble(){
    int i =1;
    while(i<=100) {
        printf("%d\n",i);
        i *= 2;
    }
}
int main () {
    printDouble();
    return 0;
}
//do phuc tap O(log n)