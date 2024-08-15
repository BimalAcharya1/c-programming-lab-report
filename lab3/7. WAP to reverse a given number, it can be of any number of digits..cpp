/*7. WAP to reverse a given number, it can be of any number of digits. */

#include <stdio.h>

int main() {
    int num, rev=0,rem;

    // Input a number from the user
    printf("Enter an Number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", rev);

    return 0;
}
