/*6. WAP to demonstrate the use of nested structure.*/

#include <stdio.h>

// Define a structure for Grades
struct Grades {
    float math;
    float science;
    float english;
};

// Define a structure for Student
struct Student {
    char name[50];
    int age;
    struct Grades grades;  // Nested structure
};

int main() {
    // Create an instance of Student
    struct Student student;

    // Input student details
    printf("Enter student's name: ");
    fgets(student.name, sizeof(student.name), stdin); // Read name
    printf("Enter student's age: ");
    scanf("%d", &student.age);
    
    // Input grades
    printf("Enter grades for Math, Science, and English:\n");
    printf("Math: ");
    scanf("%f", &student.grades.math);
    printf("Science: ");
    scanf("%f", &student.grades.science);
    printf("English: ");
    scanf("%f", &student.grades.english);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Name: %s", student.name);
    printf("Age: %d\n", student.age);
    printf("Grades:\n");
    printf("Math: %.2f\n", student.grades.math);
    printf("Science: %.2f\n", student.grades.science);
    printf("English: %.2f\n", student.grades.english);

    return 0;
}

