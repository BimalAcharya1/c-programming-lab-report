/*7. WAP to read name, address and salary of employees and display the record of each employee in 
ascending order of their name */

#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define NAME_LENGTH 50
#define ADDRESS_LENGTH 100

// Structure to hold employee information
struct Employee {
    char name[NAME_LENGTH];
    char address[ADDRESS_LENGTH];
    float salary;
};

// Function to sort employees by name
void sortEmployees(struct Employee employees[], int count) {
    struct Employee temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                // Swap if employees[i] should come after employees[j]
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    // Read the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    // Input validation
    if (n <= 0 || n > MAX_EMPLOYEES) {
        printf("Invalid number of employees.\n");
        return 1;
    }

    // Read employee records
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        getchar(); // Clear the newline character from buffer
        fgets(employees[i].name, NAME_LENGTH, stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline

        printf("Address: ");
        fgets(employees[i].address, ADDRESS_LENGTH, stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = 0; // Remove newline

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Sort employees by name
    sortEmployees(employees, n);

    // Display sorted employee records
    printf("\nEmployee Records in Ascending Order of Name:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("------------------------\n");
    }

    return 0;
}

