/*5. In the bank there are n number of customers with attributes name, account_no, and balance; 
WAP to find out the details of customer having highest and lowest balance.*/

#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100

// Define a structure to hold customer details
struct Customer {
    char name[50];
    char account_no[20];
    float balance;
};

// Function to find the customer with the highest and lowest balance
void findHighLowBalance(struct Customer customers[], int n) {
    if (n == 0) {
        printf("No customers available.\n");
        return;
    }

    struct Customer highest = customers[0];
    struct Customer lowest = customers[0];

    // Loop through the customers to find highest and lowest balance
    for (int i = 1; i < n; i++) {
        if (customers[i].balance > highest.balance) {
            highest = customers[i];
        }
        if (customers[i].balance < lowest.balance) {
            lowest = customers[i];
        }
    }

    // Display the results
    printf("Customer with Highest Balance:\n");
    printf("Name: %s\n", highest.name);
    printf("Account No: %s\n", highest.account_no);
    printf("Balance: %.2f\n", highest.balance);
    
    printf("\nCustomer with Lowest Balance:\n");
    printf("Name: %s\n", lowest.name);
    printf("Account No: %s\n", lowest.account_no);
    printf("Balance: %.2f\n", lowest.balance);
}

int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int n;

    // Input number of customers
    printf("Enter number of customers (max %d): ", MAX_CUSTOMERS);
    scanf("%d", &n);

    // Input details for each customer
    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Account No: ");
        scanf("%s", customers[i].account_no);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Find and display the customer with the highest and lowest balance
    findHighLowBalance(customers, n);

    return 0;
}

