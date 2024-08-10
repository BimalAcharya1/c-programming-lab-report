/*13. Get input of your name, address, age in years, weight and height from keyboard and 
display the information using unformatted I/O (String I/O).*/

#include <stdio.h>

int main() {
    char name[100];
    char address[200];
    int age;
    float weight, height;

    // Getting input
    printf("Enter your Name: ");
    gets(name);  // Note: gets() is unsafe and is used here for simplicity; prefer fgets() in practice

    printf("Enter your Address: ");
    gets(address);  // Note: gets() is unsafe and is used here for simplicity; prefer fgets() in practice

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your Weight: ");
    scanf("%f", &weight);

    printf("Enter your Height: ");
    scanf("%f", &height);

    // Displaying information
    printf("\n--- Personal Information ---\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f m\n", height);

    return 0;
}
