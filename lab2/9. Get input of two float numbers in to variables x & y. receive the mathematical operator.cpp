/*9. Get input of two float numbers in to variables x & y. receive the mathematical operator 
(+, -, *, /) using unformatted I/O into the variable Ch1 and perform operations on x & y 
and display the result.*/

#include<stdio.h>
int main(){
    int A, B;
    char Ch;
    float result;

    printf("Enter your first number:\t");
    scanf("%d", &A);

    printf("Enter your second number:\t");
    scanf("%d", &B);

    printf("Enter your operation (+, -, *, /):\t");
    scanf(" %c", &Ch);

    switch (Ch) {
        case '+':
            result = A + B;
            printf("RESULT: %.2f\n", result);
            break;
        case '-':
            result = A - B;
            printf("RESULT: %.2f\n", result);
            break;
        case '*':
            result = A * B;
            printf("RESULT: %.2f\n", result);
            break;
        case '/':
            if (B != 0) {
                result = A / B;
                printf("RESULT: %.2f\n", result);
            } else {
                printf("ERROR: Division by zero.\n");
            }
            break;
        default:
            printf("INVALID OPERATOR\n");
    }

    return 0;
}
