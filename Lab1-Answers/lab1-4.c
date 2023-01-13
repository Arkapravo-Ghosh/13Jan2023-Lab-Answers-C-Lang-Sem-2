#include <stdio.h>
int main() {
    int a, d;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a / 100;
    printf("The number without the last two digits is %d.\n", d);
    return 0;
}