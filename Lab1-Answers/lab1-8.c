#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = ((a / 10) * 10) + (a % 10) * 2;
    printf("The new number is %d.\n", b);
    return 0;
}