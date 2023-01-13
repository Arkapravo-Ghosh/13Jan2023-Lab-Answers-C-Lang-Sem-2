#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = (a - (a / 100) * 100 - (a - (a / 10) * 10)) / 10;
    printf("The second last digit is %d.\n", b);
    return 0;
}