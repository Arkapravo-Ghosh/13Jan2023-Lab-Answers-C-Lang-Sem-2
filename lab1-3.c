#include <stdio.h>

// Join a digit to a number

int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a digit: ");
    scanf("%d", &b);
    c = a * 10 + b;
    printf("The number with the digit added is %d.\n", c);
    return 0;
}