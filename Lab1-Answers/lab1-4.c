#include <stdio.h>
int main() {
    int a, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a / 10;
    printf("The number without the last digit is %d.\n", d);
    return 0;
}
