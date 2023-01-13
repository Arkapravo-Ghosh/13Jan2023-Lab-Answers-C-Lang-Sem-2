#include <stdio.h>
int main() {
    int a, b, c, d, e;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a / 100 - (a / 1000 * 10);
    c = a / 10 - (a / 100 * 10);
    d = a - (a / 10 * 10);
    e = a / 1000 * 1000 + d * 100 + c * 10 + b;
    printf("The required number is %d.\n", e);
    return 0;
}