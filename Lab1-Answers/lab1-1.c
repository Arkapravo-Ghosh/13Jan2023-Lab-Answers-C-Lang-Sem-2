#include <stdio.h>
int main() {
    int a, b, q, r;
    printf("Enter the divisor: ");
    scanf("%d", &a);
    printf("Enter the dividend: ");
    scanf("%d", &b);
    q = b / a;
    r = b % a;
    printf("The quotient is %d and the remainder is %d.\n", q, r);
    return 0;
}