//1. WAP that demonstrate initializing structure variable.

#include <stdio.h>

// Define a structure named 'Person'
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Initialize a structure variable 'person1' using designated initializer
    struct Person person1 = {"Bimal", 29, 5.1};

    // Display the initialized values of the structure members
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    return 0;
}

