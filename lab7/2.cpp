//2. WAP that shows how to use a structure in a program:

#include <stdio.h>

// Define a structure named 'Book'
struct Book {
    char title[50];
    char author[50];
    int pages;
    float price;
};

// Function to display book details
void displayBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: $%.2f\n", b.price);
}

int main() {
    // Declare and initialize a structure variable 'book1' of type 'Book'
    struct Book book1 = {"The Great Gatsby", "F. Scott Fitzgerald", 180, 19.5};

    // Display the details of book1 by passing it to the displayBook function
    displayBook(book1);

    return 0;
}

