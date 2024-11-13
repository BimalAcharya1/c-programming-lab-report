/*6. WAP to create a file name employess.txt and write ID name, post and salary of employees to 
this file.*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_EMPLOYEES 5  // Maximum number of employees

// Define a structure to hold employee details
struct Employee {
    int id;
    char name[50];
    char post[50];
    float salary;
};

int main() {
    FILE *file;  // File pointer
    struct Employee emp;  // Structure to hold employee data
    int i;  // Loop counter

    // Open the file "employees.txt" for writing
    file = fopen("employees.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);  // Exit if file cannot be opened
    }

    // Write the header to the file
    fprintf(file, "Employee ID |  Name         |  Post       |  Salary\n");
    fprintf(file, "------------------------------------------------------\n");

    // Take input for multiple employees and write to the file
    for (i = 0; i < MAX_EMPLOYEES; i++) {
        // Prompt user to enter employee details
        printf("Enter details for employee %d\n", i + 1);

        printf("ID: ");
        scanf("%d",&emp.id);
        getchar();  // To consume the newline character left by scanf

        printf("Name: ");
        fgets(emp.name,sizeof(emp.name), stdin);  // Use fgets to allow spaces in name
        emp.name[strcspn(emp.name, "\n")] = 0;  // Remove the newline character from the name

        printf("Post: ");
        fgets(emp.post, sizeof(emp.post), stdin);
        emp.post[strcspn(emp.post, "\n")] = 0;  // Remove the newline character from the post

        printf("Salary: ");
        scanf("%f", &emp.salary);
        getchar();  // To consume the newline character left by scanf

        // Write employee data to the file
        fprintf(file, "%d          | %-12s | %-10s | %.2f\n", emp.id, emp.name, emp.post, emp.salary);
        printf("\n");  // New line for better formatting
    }

    // Close the file after writing
    fclose(file);

    // Indicate successful writing
    printf("Employee details successfully written to 'employees.txt'.\n");

    return 0;
}

