#include <stdio.h>
// Find the product of two numbers after exchanging the last digits of both numbers
int main() {
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = (((a / 10) * 10) + (b % 10)) * (((b / 10) * 10) + (a % 10));
    printf("The product of the two numbers after exchanging the last digits is %d.\n", c);
    return 0;
}