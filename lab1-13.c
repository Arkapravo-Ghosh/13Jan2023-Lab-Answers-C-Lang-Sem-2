#include <stdio.h>
// Find the product after deleting the last digit and after deleting 2nd last digit
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = ((a / 100) * 10 + (a % 10)) * (a / 10);
    printf("The required product is %d.\n", b);
    return 0;
}