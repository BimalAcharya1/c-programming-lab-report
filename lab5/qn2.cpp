/*2. WAP to find greater number among two number using the return statement functions. */

#include <stdio.h>
int findGreater(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int main() {
    int a, b, greater;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the greater number using the function
    greater = findGreater(a, b);

    // Output the result
    printf("The greater number is: %d\n", greater);

    return 0;
}

