#include <stdio.h>
// Delete 2nd last digit
int main() {
    int a, b, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = (a / 100) * 10 + (a % 10);
    printf("The new number is %d.\n", b);
    return 0;
}