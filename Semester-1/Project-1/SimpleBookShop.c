#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5000 // Maximum number of books that can be stored


// Structure to store book information
typedef struct {
    char title[51];
    char author[31];
    float price;
    int copies;
} Book;

// Array to store books
Book books[MAX_BOOKS];
int bookCount = 0;

// All Function declarations

void showWelcomeMessage(); // Function declaration for showing welcome message
void showGoodByeMessage(); // Function declaration for showing goodbye message
void showMenuOptions(); // Function declaration for showing menu options
void showBooks(); // Function declaration for showing all books
void addBook(); // Function declaration for adding a new book
void searchBookByTitle(); // Function declaration for searching books by title
void searchBookByAuthor(); // Function declaration for searching books by author
void showNumberOfBooks(); // Function declaration for showing total number of books
void toLowerCase(char str[]); // Helper function to convert string to lowercase
void removeSpaces(char str[]); // Helper function to remove spaces from a string
void removeNewline(char str[]); // Helper function to remove newline characters

int main() {
    int choice;

    showWelcomeMessage();

    do {
        showMenuOptions();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: showBooks(); break; // Call showBooks when option 1 is selected
            case 2: addBook(); break; // Call addBook when option 2 is selected
            case 3: searchBookByTitle(); break; // Call searchBookByTitle when option 3 is selected
            case 4: searchBookByAuthor(); break; // Call searchBookByAuthor when option 4 is selected
            case 5: showNumberOfBooks(); break; // Call showNumberOfBooks when option 5 is selected
            case 6: showGoodByeMessage(); break; // Call showGoodByeMessage when option 6 is selected
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
// Welcome message
void showWelcomeMessage() {
    printf("****************************************** \n");
    printf("* Welcome to the Simple Book Shop System *  \n");
    printf("******************************************\n");
}
// Goodbye message
void showGoodByeMessage() {
    printf("*********************************************\n");
    printf("* Thank you for using the Book Shop System! *\n");
    printf("* Goodbye and have a great day!             *\n");
    printf("*********************************************\n");
}

// Function to show menu options
void showMenuOptions() {
    printf("\nMenu Options:\n");
    printf("1. Show All Books\n");
    printf("2. Add a New Book\n");
    printf("3. Search for a Book by Title\n");
    printf("4. Search for Books by Author\n"); 
    printf("5. Show Total Number of Copies\n");
    printf("6. Exit\n");
}

// Defination of showBooks function to show all books
void showBooks() {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }
    printf("\nList of Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%d. Title: %s, Author: %s, Price: %.2f TK, Copies: %d\n",
               i + 1, books[i].title, books[i].author, books[i].price, books[i].copies);
    }
}
//Defination of addBook function to show all books
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Book storage is full.\n");
        return;
    }

    printf("\nEnter book title: ");
    getchar(); // Clear input buffer
    scanf("%[^\n]s", books[bookCount].title);
    getchar(); 

    printf("Enter author name: ");
    scanf("%[^\n]s", books[bookCount].author);
    getchar(); 
    printf("Enter book price: ");
    scanf("%f", &books[bookCount].price);

    printf("Enter number of copies: ");
    scanf("%d", &books[bookCount].copies);

    bookCount++;
    printf("Book added successfully!\n");
}


// Defination of searchBookByTitle function to search books by title
void searchBookByTitle() {
    char searchTitle[51];
    char formattedSearchTitle[51];
    int found = 0;

    printf("\nEnter the title of the book to search: ");
    getchar(); // Clear input buffer
    scanf("%[^\n]s", searchTitle);
    
    strcpy(formattedSearchTitle, searchTitle);
    toLowerCase(formattedSearchTitle);
    removeSpaces(formattedSearchTitle);

    for (int i = 0; i < bookCount; i++) {
        char formattedBookTitle[51];
        strcpy(formattedBookTitle, books[i].title);
        toLowerCase(formattedBookTitle);
        removeSpaces(formattedBookTitle);

        if (strcmp(formattedBookTitle, formattedSearchTitle) == 0) {
            printf("Book Found: Title: %s, Author: %s, Price: %.2f TK, Copies: %d\n",
                   books[i].title, books[i].author, books[i].price, books[i].copies);
            found = 1;
            break;
        }
    }
    if (found !=1 ) {
        printf("Book not found.\n");
    }
}

// Defination of searchBookByAuthor function to search books by author

void searchBookByAuthor() {
    char searchAuthor[31];
    char formattedSearchAuthor[31];
    int found = 0;

    printf("\nEnter the author name to search: ");
    getchar(); // Clear input buffer
    scanf("%[^\n]s", searchAuthor);
    
    strcpy(formattedSearchAuthor, searchAuthor);
    toLowerCase(formattedSearchAuthor);
    removeSpaces(formattedSearchAuthor);

    printf("\nBooks by %s:\n", searchAuthor);
    for (int i = 0; i < bookCount; i++) {
        char formattedBookAuthor[31];
        strcpy(formattedBookAuthor, books[i].author);
        toLowerCase(formattedBookAuthor);
        removeSpaces(formattedBookAuthor);

        if (strcmp(formattedBookAuthor, formattedSearchAuthor) == 0) {
            printf("Title: %s, Author: %s, Price: %.2f TK, Copies: %d\n",
                   books[i].title, books[i].author, books[i].price, books[i].copies);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by this author.\n");
    }
}

// Defination of showNumberOfBooks function to show total number of books
void showNumberOfBooks() {
    int totalCopies = 0;

    for (int i = 0; i < bookCount; i++) {
        totalCopies += books[i].copies;
    }

    printf("\nTotal number of books (copies): %d\n", totalCopies);
}

// Helper function to convert string to lowercase
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

// Helper function to remove spaces from a string
void removeSpaces(char str[]) {
    int i, j = 0;
    char temp[strlen(str) + 1];
    for (i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strcpy(str, temp);
}

