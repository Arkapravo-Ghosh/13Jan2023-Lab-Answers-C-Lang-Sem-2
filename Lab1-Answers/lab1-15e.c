#include <stdio.h>
int main() {
    int a, k;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter the value of k: ");
    scanf("%d", &k);
    while (k-- != 1) {
        a = a / 10;
    }
    a = a - (a / 10) * 10;
    printf("The required output is %d.\n", a);
    return 0;
}