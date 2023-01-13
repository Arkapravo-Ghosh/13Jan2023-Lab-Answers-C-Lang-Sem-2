#include <stdio.h>
int main() {
    int a, b, c, d, e;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a % 1000 / 100;
    c = a % 100 / 10;
    d = a % 10;
    e = a / 1000 * 1000 + d * 100 + c * 10 + b;
    printf("The number with last two digits exchanged is %d.\n", e);
    return 0;
}