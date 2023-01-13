#include <stdio.h>
// Find the sum of last two digits
int main() {
    int a, d, l;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a % 100 / 10;
    l = a % 10;
    printf("The sum of the last two digits is %d.\n", d + l);
    return 0;
}