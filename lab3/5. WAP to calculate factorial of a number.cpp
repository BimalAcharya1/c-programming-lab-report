/*5. WAP to calculate factorial of a number */

#include <stdio.h>

int main() {
    int n, i;
    float F=1;

	input:
    printf("Enter a number to calculate its factorial:\t");
    scanf("%d",&n);

	
    if (n<=0) {
    goto input;
    
    } else {
    
        for (i=1; i<=n; i++) {
            F *= i;
        }

        printf("Factorial of %d is: %.2f\n", n, F);
    }

    return 0;
}
