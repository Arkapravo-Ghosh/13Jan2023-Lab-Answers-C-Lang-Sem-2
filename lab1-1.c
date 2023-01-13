#include <stdio.h>
// WAP to print the quotient and the remainder.

int main() {
    int a, b, q, r; // Declaring the integral variables
    printf("Enter the divisor: "); // Asking the user to input the divisor
    scanf("%d", &a); // Taking the input for the divisor
    printf("Enter the dividend: "); // Askint the user to input the dividend
    scanf("%d", &b); // Taking the input for the dividend
    q = b / a; // Calculating the quotient
    r = b % a; // Calculating the reminder
    printf("The quotient is %d and the remainder is %d.\n", q, r); // Printing the output
    return 0; // Returning the value 0 to indicate no error
}