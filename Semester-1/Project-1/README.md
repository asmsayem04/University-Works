# Simple Book Shop System

## Overview
The **Simple Book Shop System** is a console-based C program that allows users to manage a collection of books. Users can add books, view the list of available books, search for books by title or author, and check the total number of copies available in the system.

## Features
- Display all available books.
- Add new books with details such as title, author, price, and number of copies.
- Search for books by title with case-insensitive and space-tolerant matching.
- Search for books by author with case-insensitive and space-tolerant matching.
- Show the total number of books (copies) in the system.
- User-friendly menu-driven interface.

## How to Use
1. Run the program.
2. Select an option from the menu:
   - **1**: Show all books.
   - **2**: Add a new book.
   - **3**: Search for a book by title.
   - **4**: Search for books by author.
   - **5**: Show total number of copies.
   - **6**: Exit the program.
3. Follow the on-screen instructions to enter book details or search queries.

## Project Structure
The program consists of the following core components:
- **Main Function**: Handles user input and calls the appropriate functions.
- **Book Structure**: Stores book details (title, author, price, copies).
- **Helper Functions**: Includes functions for case conversion and whitespace removal to improve search functionality.

## Author
This project was developed by **A S M SAYEM** as the final project for the **Structured Programming Course**.

## Compilation and Execution
To compile and run the program, use the following commands in a terminal with a C compiler (e.g., GCC):

```sh
gcc book_shop_system.c -o book_shop_system
./book_shop_system
```



