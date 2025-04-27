# Student Management System

A Java application that demonstrates file handling operations by managing student records.

## Features

- Add new students with their details
- Store student records in a text file (Database.txt)
- Read and display stored student records
- Interactive console-based interface

## Structure

The project consists of three main classes:

1. `Student.java`: Class that defines the student model with properties like name, ID, department, etc.
2. `Operations.java`: Contains the core functionality for:
   - Adding new students
   - Writing to database file
   - Reading from database file
   - Managing the program flow
3. `Main.java`: Entry point of the application

## How to Use

1. Run the program using the Main class
2. Choose from the following options:
   - Enter 1 to add a new student
   - Enter 2 to view all stored records
   - Enter 3 to exit the program

## Data Storage

Student records are stored in `Database.txt` with the following format:
```
Name
ID
Department
Age
CGPA
Email
Semester
===================================
```

## Technical Implementation

- Uses `FileWriter` for writing records to file
- Uses `FileReader` and `BufferedReader` for reading records
- Implements error handling for file operations
