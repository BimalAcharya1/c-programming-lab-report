/*4. Two numbers are entered through the keyboard. Write a program to find the value of one 
number raised to the power of another */

#include <stdio.h>
#include <math.h>

int main() {
    float A, B, R;


    printf("Enter the base number: ");
    scanf("%f", &A);

    printf("Enter the exponent: ");
    scanf("%f", &B);


    R = pow(A, B);


    printf("%.2f raised to the power of %.2f is: %.2f", A, B, R);

    return 0;
}
