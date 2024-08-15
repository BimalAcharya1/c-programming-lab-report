/*8. WAP to check whether number is palindrome or not? */

#include <stdio.h>

int main() {
    int num1,num2 , rem, rev = 0;
	
	printf("\t\t**Checking the number is Palindrome or not**");
    printf("\nEnter Number: ");
    scanf("%d", &num1);

    num2 = num1;

    while (num1 != 0) {
        rem = num1%10;
        rev = rev*10 + rem;
        num1 /= 10;
    }

    if (num2 == rev) {
        printf("%d is a palindrome.\n", num2);
    } else {
        printf("%d is not a palindrome.\n", num2);
    }

    return 0;
}
