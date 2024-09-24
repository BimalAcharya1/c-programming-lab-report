/*6. WAP to illustrate using (Function with arguments and return type).*/
#include <stdio.h>

// Function declaration:
int calculate_area(int length, int width);

// Main function:
int main() {
    int length, width, area;

    // Prompt the user to enter the length and width
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    // Call the calculate_area function with the length and width as arguments
    area = calculate_area(length, width);

    // Print the calculated area
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

// Function definition:
int calculate_area(int length, int width) {
    // Calculate the area of the rectangle
    int area = length * width;

    // Return the calculated area
    return area;
}
