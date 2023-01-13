#include <stdio.h>
int main() {
    int a, d, l;
    printf("Enter a number: ");
    scanf("%d", &a);
    d = a / 10;
    l = d % 10;
    printf("The second last digit is %d.\n", l);
    return 0;
}