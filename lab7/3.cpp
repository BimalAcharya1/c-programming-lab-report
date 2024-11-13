/* 3. WAP to Create a structure name student that has name, roll , marks and remarks as the  
member Assume appropriate type and size of member Use this structure to read and display 
records of 5 students */

#include <stdio.h>

// Define a structure named 'Student'
struct Student {
    char name[50];      // Name of the student
    int roll;           // Roll number of the student
    float marks;        // Marks obtained by the student
    char remarks[100];  // Remarks about the student
};

int main() {
    // Declare an array of 5 Student structures
    struct Student students[5];

    // Loop to read details of each student
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        // Read name
        printf("Enter name: ");
        scanf(" %[^\n]s", students[i].name);

        // Read roll number
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        // Read marks
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);

        // Read remarks
        printf("Enter remarks: ");
        scanf(" %[^\n]s", students[i].remarks);

        printf("\n");
    }

    // Display the details of each student
    printf("Displaying Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Remarks: %s\n\n", students[i].remarks);
    }

    return 0;
}

