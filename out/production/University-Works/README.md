# Student Management System (SMS)  

## Description  
This is a **basic Java program** that implements a **Student Management System (SMS)** using arrays. It allows users to:  
- **Add** students to the system.  
- **Display** all stored student records.  
- **Search** for a student by their **ID**.  
- **Update** student details.  
- **Delete** a student record.  
- **Store a fixed number of student records** (defined at runtime).  

This program is designed using **structured programming principles**, and it is **not a database-driven system**. Instead, it uses **arrays** to manage student data within the program's memory.  

---

## Features  
1. **Add Student** → Input name, ID, age, department, and GPA.  
2. **Show Students** → Display all students stored in the system.  
3. **Search Student by ID** → Find a student using their ID.  
4. **Update Student** → Modify student details using their ID.  
5. **Delete Student** → Remove a student record.  
6. **Exit Program** → Close the application.  

---

## How It Works  
1. **User Input for Storage**: At the start, the user enters the maximum number of students that can be stored.  
2. **Menu-Driven Interface**: The system continuously displays a menu for the user to choose different operations.  
3. **Array-Based Storage**: All student details are stored in arrays with a maximum size defined by the user.  
4. **Searching and Updating**: The program searches through arrays to locate and modify student records.  

---

## Sample Output  
```
Welcome to the Student Management System  
Enter the number of students you want to store: 5  

1. Add Student  
2. Show Students  
3. Delete Student  
4. Search Student by Id  
5. Update Student  
6. Exit  

Enter your choice: 1  
Enter the name of the Student: John Doe  
Enter the ID of the Student: 101  
Enter the Age of the Student: 20  
Enter the Department of the Student: CSE  
Enter the GPA of the Student: 3.8  

Student added successfully!  
```

---

## Compilation and Execution  
To compile and run the program:  
```sh
javac SMS_System.java  
java SMS_System  
```
Ensure you have **Java installed** before running the commands.  

---

## Notes  
- **Data is stored in arrays**, so once the program exits, all data is lost.  
- **Fixed storage limit**, meaning students cannot be added beyond the given limit.  
- **Uses basic console input/output** (no GUI implementation).  

---

## Author  
**A S M SAYEM**  
This program was created as a **Lab task for the Object-Oriented Programming (OOP) Course** to demonstrate **basic CRUD (Create, Read, Update, Delete) operations** using Java.