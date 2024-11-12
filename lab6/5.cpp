//5. WAP to display name, age and mark of student using structure variable.
#include <stdio.h>
#include <string.h>

// Define a structure named 'Student' to hold student information
struct Student {
    char name[50];
    int age;
    float mark;
};

int main() {
    // Declare a structure variable of type 'Student'
    struct Student student;

    // Assign values to the structure members
    strcpy(student.name, "Bimal Acharya");
    student.age = 29;
    student.mark = 85.5;

    // Display the student information
    printf("Student Details:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Mark: %.2f\n", student.mark);

    return 0;
}

