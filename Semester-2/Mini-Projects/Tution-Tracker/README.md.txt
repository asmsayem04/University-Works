# Tuition Tracker System
## Object Oriented Programming Course Project

### Project Overview
A Java-based tuition management system that helps tutors track students, monthly classes, and attendance. Built using OOP principles for better code organization and maintenance.

### Features
- **Student Management**
  - Add new students
  - Update student information
  - Delete students
  - View student details

- **Monthly Tracking**
  - Add months for each student
  - Track planned vs taken classes
  - Calculate extra classes
  - Store class dates

- **Data Persistence**
  - Auto-save functionality
  - Load previous data on startup
  - Serialization for data storage

### Class Structure
1. **Main Class**
   - Entry point of application
   - Manages Operator instance

2. **Operator Class**
   - Core functionality handler
   - Menu system
   - File operations
   - Student management

3. **Student Class**
   - Student information storage
   - Name validation
   - Phone number validation
   - Monthly info management

4. **MonthlyInfo Class**
   - Monthly class tracking
   - Class date storage
   - Extra class calculation

5. **Custom Exceptions**
   - [`NameTooLongException`](src/NameTooLongException.java)
   - [`InvalidPhoneNumberException`](src/InvalidPhoneNumberException.java)
   - [`NegativePlannedClassException`](src/NegativePlannedClassException.java)
   - [`ClassExicdTheMonthException`](src/ClassExicdTheMonthException.java)

### Technical Details
- Language: Java
- Data Storage: Serialization
- Error Handling: Custom Exceptions
- Input Validation: Comprehensive checks

### Requirements
- Java Development Kit (JDK) 8 or higher
- Any Java IDE (preferably IntelliJ IDEA or VS Code)

### How to Run
1. Clone the repository
2. Open in your Java IDE
3. Compile all Java files
4. Run the Main class

```bash
javac src/*.java
java -cp src Main
```

### Usage Guide
1. **Adding a Student**
   - Select option 1 from main menu
   - Enter student details
   - System validates input

2. **Adding a Month**
   - Select option 2
   - Choose student
   - Enter month name (format: January-2025)

3. **Recording Classes**
   - Select option 3
   - Choose student and month
   - Enter class date

4. **Viewing Information**
   - Select option 4
   - Choose student
   - View complete details

### Project Structure
```
src/
├── Main.java
├── Operator.java
├── Student.java
├── MonthlyInfo.java
├── NameTooLongException.java
├── InvalidPhoneNumberException.java
├── NegativePlannedClassException.java
└── ClassExicdTheMonthException.java
```

### OOP Concepts Used
1. **Encapsulation**
   - Private fields with getters/setters
   - Data validation within classes

2. **Inheritance**
   - Custom exceptions extending RuntimeException

3. **Abstraction**
   - Clear class responsibilities
   - Well-defined interfaces

4. **Polymorphism**
   - Method overriding in exceptions
   - Flexible student management

### Data Persistence
- Data saved in "tuition_data.ser"
- Automatic save on exit
- Load on startup

### Error Handling
- Input validation
- Custom exceptions
- User-friendly error messages

### Future Improvements
1. Database integration
2. GUI implementation
3. Report generation
4. Multiple tutor support
5. Payment tracking

### Author
[A S M Sayem
[ID: 2024-3-60-6115]
[East West University]

### Course Information
- Course: Object Oriented Programming
- Semester: [Spring 2025]
- Year: [2025]

### License
This project is created for educational purposes as part of the Object Oriented Programming course.