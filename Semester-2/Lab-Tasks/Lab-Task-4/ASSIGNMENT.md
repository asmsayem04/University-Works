# Lab Task 4: File Handling in Java

## Assignment Requirements

To practice Java file handling using FileWriter, BufferedWriter, FileReader, and BufferedReader classes by:
- Collecting and storing student data
- Writing the data into a .txt file
- Reading the data from the file
- Displaying it in a formatted manner on the console

### Part 1: Student Class Requirements
Create a Student class with the following fields:
- String id
- String name
- int age
- double gpa

### Part 2: Writing to a File
1. Create a method that takes input for at least 5 students (hardcoded or using Scanner)
2. Write the student data to a text file named students.txt
3. Each line should represent one student with the format:
   - ID
   - Name
   - Age
   - GPA

### Part 3: Reading from the File
1. Read the contents of students.txt line by line
2. Parse each line and create Student objects
3. Display them neatly on the console

## Note
The implemented solution extends beyond the basic requirements by including additional fields:
- Department
- Email
- Semester
- CGPA instead of GPA
