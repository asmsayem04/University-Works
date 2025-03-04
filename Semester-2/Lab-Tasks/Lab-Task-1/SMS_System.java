import java.util.Scanner;

public class SMS_System {
    static Scanner input = new Scanner(System.in);
    static int STD_STORAGE;
    static String[] names;
    static int[] ages;
    static String[] departments;
    static float[] gpas;
    static String[] ids; 
    static int stdCount = 0;

    public static void initializeArrays() {
        names = new String[STD_STORAGE];
        ages = new int[STD_STORAGE];
        departments = new String[STD_STORAGE];
        gpas = new float[STD_STORAGE];
        ids = new String[STD_STORAGE]; 
    }

    public static void AddCredentials(int count) {
        input.nextLine(); 
        System.out.println("Enter the name of the Student:");
        names[count] = input.nextLine();
        
        System.out.println("Enter the ID of the Student:");
        ids[count] = input.nextLine(); 
        
        System.out.println("Enter the Age of the Student:");
        ages[count] = input.nextInt();
        
        input.nextLine(); 
        System.out.println("Enter the Department of the Student:");
        departments[count] = input.nextLine();
        
        System.out.println("Enter the GPA of the Student:");
        gpas[count] = input.nextFloat();
    }

    public static void addStudent() {
        if (stdCount >= STD_STORAGE) {
            System.out.println("Storage is full!");
            return;
        }
        AddCredentials(stdCount);
        stdCount++;
    }

    public static void showOne(int i) {
        System.out.println("Name: " + names[i]);
        System.out.println("Id: " + ids[i]);
        System.out.println("Age: " + ages[i]);
        System.out.println("Department: " + departments[i]);
        System.out.println("GPA: " + gpas[i]);
    }

    public static void showStudents() {
        for (int i = 0; i < stdCount; i++) {
            showOne(i);
        }
    }

    public static int findStudentIndexById(String id) {
        for (int i = 0; i < stdCount; i++) {
            if (ids[i].equals(id)) {
                return i;
            }
        }
        return -1;
    }

    public static void shiftLeftFromIndex(int index) {
        for (int i = index; i < stdCount - 1; i++) {
            names[i] = names[i + 1];
            ids[i] = ids[i + 1];
            ages[i] = ages[i + 1];
            departments[i] = departments[i + 1];
            gpas[i] = gpas[i + 1];
        }
    }

    public static void deleteStudent() {
        System.out.println("Enter the ID of the Student you want to delete:");
        String id = input.nextLine(); 
        int index = findStudentIndexById(id);

        if (index != -1) {
            shiftLeftFromIndex(index);
            stdCount--;
            System.out.println("Student deleted successfully.");
        } else {
            System.out.println("Student not found");
        }
    }

    public static void searchStudentById() {
        System.out.println("Enter the ID of the Student you want to search:");
        String id = input.nextLine(); 
        int index = findStudentIndexById(id);

        if (index != -1) {
            showOne(index);
        } else {
            System.out.println("Student not found");
        }
    }

    public static void updateStudent() {
        System.out.println("Enter the ID of the Student you want to update:");
        String id = input.nextLine(); 
        int index = findStudentIndexById(id);

        if (index != -1) {
            AddCredentials(index);
            System.out.println("Student updated successfully.");
        } else {
            System.out.println("Student not found");
        }
    }

    public static void showMenu() { 
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
        initializeArrays();  

        while (true) {
            showMenu();
            System.out.println("Enter your choice:");
            int choice = input.nextInt();
            input.nextLine(); 
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