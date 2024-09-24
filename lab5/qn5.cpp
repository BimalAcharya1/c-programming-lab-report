/*5. WAP to illustrate using (Function with arguments and no return type).*/
#include <stdio.h>

// Function declaration:
void greet(char name[]);

// Main function:
int main() {
    char name[20];


    // Prompt the user to enter their name
    printf("Enter your name: ");
    scanf("%s", name);

    // Call the greet function with the user's name as an argument
    greet(name);

    return 0;
}

// Function definition:
void greet(char name[]) {
    // Print a greeting message using the provided name
    printf("Hello, %s!\n", name);
}
