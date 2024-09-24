/*4. WAP to illustrate using (Function with no arguments and return type).*/
#include <stdio.h>
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    int number;

    // Call the function and store the returned value
    number = getNumber();

    // Output the result
    printf("The number entered is: %d\n", number);

    return 0;
}

