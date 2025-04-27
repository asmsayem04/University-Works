import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Operations {
    Scanner input = new Scanner(System.in);
    private Student students[] = new Student[100];
    private int studentCount = 0;


    private void AddStudent(){

        System.out.print("Enter Name: ");
        String name = input.nextLine();
        System.out.print("Enter ID: ");
        String id = input.nextLine();
        System.out.print("Enter Department: ");
        String department = input.nextLine();
        System.out.print("Enter Age: ");
        int age = input.nextInt();
        input.nextLine();
        System.out.print("Enter CGPA: ");
        double cgpa = input.nextDouble();
        input.nextLine();
        System.out.print("Enter Email: ");
        String email = input.nextLine();
        System.out.print("Enter Semester: ");
        int semester = input.nextInt();

        students[studentCount] = new Student(name, id, department, age, cgpa, email, semester);
    }

    private void WriteToDatabase(){
        AddStudent();
        try (FileWriter writer = new FileWriter("Database.txt", true)) {
            writer.write(students[studentCount].getName() + "\n");
            writer.write(students[studentCount].getId() + "\n");
            writer.write(students[studentCount].getDepartment() + "\n");
            writer.write(students[studentCount].getAge() + "\n");
            writer.write(students[studentCount].getCgpa() + "\n");
            writer.write(students[studentCount].getEmail() + "\n");
            writer.write(students[studentCount].getSemester() + "\n");
            writer.write("===================================\n");
            writer.flush();
            System.out.println("Student " + (studentCount + 1) + " Successfully Stored.");
            studentCount++;
        } catch (IOException e) {
            System.out.println("Error writing to file: " + e.getMessage());
        }
    }

    private void ReadFromDatabase() {
        try (FileReader fr = new FileReader("Database.txt");
            BufferedReader br = new BufferedReader(fr)) {
            String str;
            while ((str = br.readLine()) != null) {
                try {
                    System.out.println("Name: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("ID: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("Department: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("Age: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("CGPA: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("Email: " + str);
                    if ((str = br.readLine()) == null) break;
                    System.out.println("Semester: " + str);
                    str = br.readLine(); 
                    if (str != null) {
                        System.out.println(str);
                    }
                } catch (IOException e) {
                    System.out.println("Error reading student record: " + e.getMessage());
                    break;
                }
            }
        } catch (IOException e) {
            System.out.println("Error accessing database file: " + e.getMessage());
        }
    }

    public void Manager() {
        int choice;
        do {
            System.out.println("Welcome to the Student Management System: ");
            System.out.println("Enter 1 to Add Student");
            System.out.println("Enter 2 to Access the Database");
            System.out.println("Enter 3 to Exit");
            System.out.print("Enter your Choice: ");
            choice = input.nextInt();
            input.nextLine();

            switch (choice) {
                case 1:
                    WriteToDatabase();
                    break;
                case 2:
                    ReadFromDatabase();
                    break;
                case 3:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice. Please enter 1, 2, or 3.");
                    break;
            }
        } while (choice != 3);
    }
}
