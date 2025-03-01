import java.util.Scanner;

public class SMS_System {
    static Scanner input = new Scanner(System.in);
    static int STD_STORAGE;
    static String[] names;
    static int[] ages;
    static String[] departments;
    static float[] gpas;
    static int[] ids;
    static int stdCount = 0;

    public static void initializeArrays() {
        names = new String[STD_STORAGE];
        ages = new int[STD_STORAGE];
        departments = new String[STD_STORAGE];
        gpas = new float[STD_STORAGE];
        ids = new int[STD_STORAGE];
    }

    public static void addStudent() {
        if (stdCount >= STD_STORAGE) {
            System.out.println("Storage is full!");
            return;
        }
        
        input.nextLine(); // Clear buffer
        System.out.println("Enter the name of the Student:");
        names[stdCount] = input.nextLine();
        
        System.out.println("Enter the ID of the Student:");
        ids[stdCount] = input.nextInt();
        
        System.out.println("Enter the Age of the Student:");
        ages[stdCount] = input.nextInt();
        
        input.nextLine(); // Clear buffer
        System.out.println("Enter the Department of the Student:");
        departments[stdCount] = input.nextLine();
        
        System.out.println("Enter the GPA of the Student:");
        gpas[stdCount] = input.nextFloat();

        stdCount++;
    }

    public static void showStudents() {
        for (int i = 0; i < stdCount; i++) {
            System.out.println("Name: " + names[i]);
            System.out.println("Id: " + ids[i]);
            System.out.println("Age: " + ages[i]);
            System.out.println("Department: " + departments[i]);
            System.out.println("GPA: " + gpas[i]);
        }
    }

    public static void deleteStudent() {
        System.out.println("Enter the ID of the Student you want to delete:");
        int id = input.nextInt();
        boolean found = false;

        for (int i = 0; i < stdCount; i++) {
            if (ids[i] == id) {
                for (int j = i; j < stdCount - 1; j++) {
                    names[j] = names[j + 1];
                    ids[j] = ids[j + 1];
                    ages[j] = ages[j + 1];
                    departments[j] = departments[j + 1];
                    gpas[j] = gpas[j + 1];
                }
                stdCount--;
                found = true;
                break;
            }
        }
        
        if (!found) {
            System.out.println("Student not found");
        }
    }

    public static void searchStudentById() {
        System.out.println("Enter the ID of the Student you want to search:");
        int id = input.nextInt();
        boolean found = false;

        for (int i = 0; i < stdCount; i++) {
            if (ids[i] == id) {
                System.out.println("Name: " + names[i]);
                System.out.println("Id: " + ids[i]);
                System.out.println("Age: " + ages[i]);
                System.out.println("Department: " + departments[i]);
                System.out.println("GPA: " + gpas[i]);
                found = true;
                break;
            }
        }
        
        if (!found) {
            System.out.println("Student not found");
        }
    }

    public static void updateStudent() {
        System.out.println("Enter the ID of the Student you want to update:");
        int id = input.nextInt();
        boolean found = false;

        for (int i = 0; i < stdCount; i++) {
            if (ids[i] == id) {
                input.nextLine(); // Clear buffer
                System.out.println("Enter the name of the Student:");
                names[i] = input.nextLine();
                System.out.println("Enter the ID of the Student:");
                ids[i] = input.nextInt();
                System.out.println("Enter the Age of the Student:");
                ages[i] = input.nextInt();
                System.out.println("Enter the Department of the Student:");
                input.nextLine(); // Clear buffer
                departments[i] = input.nextLine();
                System.out.println("Enter the GPA of the Student:");
                gpas[i] = input.nextFloat();
                found = true;
                break;
            }
        }
        
        if (!found) {
            System.out.println("Student not found");
        }
    }

    public static void showMenu() { // Renamed from Welcome_Txt
        System.out.println("1. Add Student");
        System.out.println("2. Show Students");
        System.out.println("3. Delete Student");
        System.out.println("4. Search Student by Id");
        System.out.println("5. Update Student");
        System.out.println("6. Exit");
    }

    public static void main(String[] args) {
        System.out.println("Welcome to the Student Management System");
        System.out.println("Enter the number of students you want to store:");
        STD_STORAGE = input.nextInt();
        initializeArrays();  // Initialize arrays after getting STD_STORAGE value

        while (true) {
            showMenu();
            System.out.println("Enter your choice:");
            int choice = input.nextInt();

            switch (choice) {
                case 1:
                    addStudent();
                    break;
                case 2:
                    showStudents();
                    break;
                case 3:
                    deleteStudent();
                    break;
                case 4:
                    searchStudentById();
                    break;
                case 5:
                    updateStudent();
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid Choice");
                    break;
            }
        }
    }
}