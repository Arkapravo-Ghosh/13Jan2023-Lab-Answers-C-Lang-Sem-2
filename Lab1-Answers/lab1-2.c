#include <stdio.h>
int main() {
    int a, d, l;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a / 10;
    l = a % 10;
    printf("The last digit is %d.\n", l);
    printf("The number without the last digit is %d.\n", d);
    return 0;
}