/*4. WAP to create a structure name employee that has name, salary, age and department as the 
member. Assume appropriate type and size of member. Use this structure to read and display 
records of 20 employee and find average salary and average age.*/

#include <stdio.h>

// Define a structure named 'Employee'
struct Employee {
    char name[50];        // Name of the employee
    float salary;         // Salary of the employee
    int age;              // Age of the employee
    char department[50];  // Department of the employee
};

int main() {
    // Declare an array of 20 Employee structures
    struct Employee employees[20];
    float totalSalary = 0.0;  // Variable to store total salary
    int totalAge = 0;         // Variable to store total age

    // Loop to read details of each employee
    for (int i = 0; i < 20; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        // Read name
        printf("Enter name: ");
        scanf(" %[^\n]s", employees[i].name);

        // Read salary
        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);

        // Read age
        printf("Enter age: ");
        scanf("%d", &employees[i].age);

        // Read department
        printf("Enter department: ");
        scanf(" %[^\n]s", employees[i].department);

        // Accumulate total salary and age
        totalSalary += employees[i].salary;
        totalAge += employees[i].age;

        printf("\n");
    }

    // Calculate average salary and average age
    float avgSalary = totalSalary / 20;
    float avgAge = (float)totalAge / 20;

    // Display details of each employee
    printf("Employee Details:\n");
    for (int i = 0; i < 20; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
        printf("Department: %s\n\n", employees[i].department);
    }

    // Display average salary and average age
    printf("Average Salary: %.2f\n", avgSalary);
    printf("Average Age: %.2f\n", avgAge);

    return 0;
}

