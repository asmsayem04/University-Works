import java.io.*;
import java.util.*;

public class Operator implements Serializable {
    private static final long serialVersionUID = 1L;
    private List<Student> students;
    private transient Scanner input;
    private static final String filename = "tuition_data.ser";

    public Operator() {
        students = new ArrayList<>();
        input = new Scanner(System.in);
    }

    private void addStudent() {
        System.out.println("\n=== Add New Student ===");

        while (true) {
            try {
                System.out.print("Enter student name: ");
                String name = input.nextLine();

                System.out.print("Enter phone number: ");
                String phoneNumber = input.nextLine();

                System.out.print("Enter planned classes per month: ");
                int plannedClasses = Integer.parseInt(input.nextLine());

                Student student = new Student(name, phoneNumber, plannedClasses);
                students.add(student);
                System.out.println("Student added successfully!");
                break;

            } catch (NameTooLongException e) {
                System.out.println("Name Error: " + e.getMessage());
            } catch (InvalidPhoneNumberException e) {
                System.out.println("Phone Error: " + e.getMessage());
            } catch (NegativePlannedClassException e) {
                System.out.println("Class Plan Error: " + e.getMessage());
            } catch (ClassExicdTheMonthException e){
                System.out.println("Class Plan Error: " + e.getMessage());
            }
            System.out.println("Please enter the details again.\n");
        }
    }

    public void addMonthToStudent() {
        if (students.isEmpty()) {
            System.out.println("No Students added yet.");
            return;
        }

        System.out.println("Select a student:");
        for (int i = 0; i < students.size(); i++) {
            System.out.println((i + 1) + ". " + students.get(i).getName());
        }

        System.out.print("Enter student number to choose : ");
        int studentIndex = input.nextInt() - 1;
        input.nextLine();

        if (studentIndex < 0 || studentIndex >= students.size()) {
            System.out.println("Invalid selection.");
            return;
        }

        Student student = students.get(studentIndex);

        System.out.print("Enter month name to add (like - January-2025): ");
        String monthName = input.nextLine();


        boolean exists = false;
        for (MonthlyInfo info : student.getMonthlyInfo()) {
            if (info.getNameOfMonth().equals(monthName)) {
                exists = true;
                break;
            }
        }

        if (!exists) {
            MonthlyInfo newMonth = new MonthlyInfo(monthName, students.get(studentIndex).getPlannedClassesPerMonth());
            student.addMonthlyInfo(newMonth);
            System.out.println("Month added to student: " + student.getName());
        } else {
            System.out.println("This month already exists for the student.");
        }
    }


    private void addClassToMonth() {
        System.out.println("\n=== Add Class to Month ===");

        if (students.isEmpty()) {
            System.out.println("No students added yet.");
            return;
        }

        System.out.println("1. Find Student By Name");
        System.out.println("2. View All Students and Select One");
        System.out.print("Choose an option (1-2): ");
        String selection = input.nextLine();

        Student student = null;

        if (selection.equals("1")) {
            student = findStudent();
            if (student == null) {
                System.out.println("Student not found.");
                return;
            }
        } else if (selection.equals("2")) {
            System.out.println("\nSelect a student:");
            for (int i = 0; i < students.size(); i++) {
                System.out.println((i + 1) + ". " + students.get(i).getName());
            }

            System.out.print("Enter your choice (1 to " + students.size() + "): ");

                int index = input.nextInt();
                input.nextLine();
                if (index < 1 || index > students.size()) {
                    System.out.println("Invalid choice!");
                    return;
                }
                student = students.get(index - 1);


        } else {
            System.out.println("Invalid selection!");
            return;
        }

        List<MonthlyInfo> months = student.getMonthlyInfo();
        if (months.isEmpty()) {
            System.out.println("No months added. Please add a month first.");
            return;
        }

        System.out.println("\nCreated months for " + student.getName() + ":");
        for (int i = 0; i < months.size(); i++) {
            MonthlyInfo month = months.get(i);
            System.out.printf("%d. %s (Classes: %d/%d)%n",
                    i + 1, month.getNameOfMonth(),
                    month.getClassesTakenThisMonth().size(),
                    month.getPlannedClassesThisMonth());
        }

        System.out.print("Select month number: ");
        int choice;

            choice = input.nextInt();
            input.nextLine();
            if (choice < 1 || choice > months.size()) {
                System.out.println("Invalid month number!");
                return;
            }


        MonthlyInfo selectedMonth = months.get(choice - 1);
        System.out.print("Enter class date (DD-MM-YYYY): ");
        String classDate = input.nextLine();

        selectedMonth.getClassesTakenThisMonth().add(classDate);
        System.out.println("Class added successfully.\n");
        displayMonthlyStatus(selectedMonth);
    }


    private void displayStudentInfo() {
        System.out.println("\n=== Student Information ===");

        if (students.isEmpty()) {
            System.out.println("No students added yet.");
            return;
        }

        System.out.println("1. Find Student By Name");
        System.out.println("2. View All Students and Select One");
        System.out.print("Choose an option (1-2): ");
        String selection = input.nextLine();

        Student student = null;

        if (selection.equals("1")) {
            student = findStudent();
            if (student == null) {
                System.out.println("Student not found.");
                return;
            }
        } else if (selection.equals("2")) {
            System.out.println("\nSelect a student:");
            for (int i = 0; i < students.size(); i++) {
                System.out.println((i + 1) + ". " + students.get(i).getName());
            }

            System.out.print("Enter your choice (1 to " + students.size() + "): ");
            try {
                int index = Integer.parseInt(input.nextLine());
                if (index < 1 || index > students.size()) {
                    System.out.println("Invalid choice!");
                    return;
                }
                student = students.get(index - 1);
            } catch (Exception e) {
                System.out.println("Invalid input!");
                return;
            }
        } else {
            System.out.println("Invalid selection!");
            return;
        }

        // student details show koar jonno rakhsi

        System.out.println("\n--- Student Details ---");
        System.out.println("Name: " + student.getName());
        System.out.println("Phone: " + student.getPhoneNumber());
        System.out.println("Planned classes per month: " + student.getPlannedClassesPerMonth());

        List<MonthlyInfo> months = student.getMonthlyInfo();
        if (months.isEmpty()) {
            System.out.println("No months added yet.");
            return;
        }

        for (MonthlyInfo month : months) {
            displayMonthlyStatus(month);
        }
    }


    private void displayMonthlyStatus(MonthlyInfo month) {
        System.out.println("\nMonth: " + month.getNameOfMonth());
        System.out.println("Planned: " + month.getPlannedClassesThisMonth());
        System.out.println("Taken: " + month.getClassesTakenThisMonth().size());

        int extra = month.getExtraClassesThisMonth();
        if (extra > 0) {
            System.out.println("Extra classes: " + extra);
        } else {
            int remaining = month.getPlannedClassesThisMonth() - month.getClassesTakenThisMonth().size();
            System.out.println("Remaining classes: " + remaining);
        }

        System.out.println("Class dates:");
        List<String> dates = month.getClassesTakenThisMonth();
        for (int i = 0; i < dates.size(); i++) {
            System.out.println((i + 1) + ". " + dates.get(i));
        }
    }

    private Student findStudent() {
        if (students.isEmpty()) {
            System.out.println("No students found!");
            return null;
        }

        System.out.print("Enter student name: ");
        String name = input.nextLine();

        for (Student s : students) {
            if (s.getName().equalsIgnoreCase(name)) return s;
        }

        System.out.println("Student not found!");
        return null;
    }
    private Student selectStudentFromList() {
        if (students.isEmpty()) {
            System.out.println("No students added yet.");
            return null;
        }

        System.out.println("\nSelect a student:");
        for (int i = 0; i < students.size(); i++) {
            System.out.println((i + 1) + ". " + students.get(i).getName());
        }

        System.out.print("Enter your choice (1 to " + students.size() + "): ");
        int index = input.nextInt();
        input.nextLine(); // Consume leftover newline

        if (index < 1 || index > students.size()) {
            System.out.println("Invalid choice!");
            return null;
        }

        return students.get(index - 1);
    }



    protected void saveData() {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(filename))) {
            oos.writeObject(students);
        } catch (IOException e) {
            System.out.println("Failed to save data: " + e.getMessage());
        }
    }

    protected void loadData() {

        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(filename))) {
            students = (List<Student>) ois.readObject();
            System.out.println("Data loaded successfully.");
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Error loading data: " + e.getMessage());
            students = new ArrayList<>();
        }

        input = new Scanner(System.in);
    }

    private void updateStudent() {
        System.out.println("\n=== Update Student ===");

        if (students.isEmpty()) {
            System.out.println("No students added yet.");
            return;
        }

        System.out.println("1. Find Student By Name");
        System.out.println("2. View All Students and Select One");
        System.out.print("Choose an option (1-2): ");
        String selection = input.nextLine();

        Student student = null;

        if (selection.equals("1")) {
            student = findStudent();
            if (student == null) {
                System.out.println("Student not found.");
                return;
            }
        } else if (selection.equals("2")) {
            student = selectStudentFromList();
        }

        System.out.println("\nWhat do you want to update for " + student.getName() + "?");
        System.out.println("1. Update Name");
        System.out.println("2. Update Phone Number");
        System.out.println("3. Update Planned Classes Per Month");
        System.out.print("Choose an option (1-3): ");
        String choice = input.nextLine();

        switch (choice) {
            case "1" -> {
                System.out.print("Enter new name: ");
                String newName = input.nextLine();
                student.setName(newName);
                System.out.println("Name updated.");
            }
            case "2" -> {
                System.out.print("Enter new phone number: ");
                String newPhone = input.nextLine();
                student.setPhoneNumber(newPhone);
                System.out.println("Phone number updated.");
            }
            case "3" -> {
                System.out.print("Enter new planned classes per month: ");
                int newPlanned = input.nextInt();
                input.nextLine();
                student.setPlannedClassesPerMonth(newPlanned);
                System.out.println("Planned classes updated.");

            }
            default -> System.out.println("Invalid option!");
        }
    }

    private void deleteStudent() {
        System.out.println("\n=== Delete Student ===");

        if (students.isEmpty()) {
            System.out.println("No students added yet.");
            return;
        }

        System.out.println("1. Find Student By Name");
        System.out.println("2. View All Students and Select One");
        System.out.print("Choose an option (1-2): ");
        String selection = input.nextLine();

        Student student = null;

        if (selection.equals("1")) {
            student = findStudent();
            if (student == null) {
                System.out.println("Student not found.");
                return;
            }
        } else if (selection.equals("2")) {
                student = selectStudentFromList();
        }

        System.out.print("Are you sure you want to delete " + student.getName() + "? (yes/no): ");
        String confirm = input.nextLine();

        if (confirm.equalsIgnoreCase("yes")) {
            students.remove(student);
            System.out.println("Student deleted.");
        } else {
            System.out.println("Deletion canceled.");
        }
    }


    protected void showMenu() {
        input = new Scanner(System.in);  // Reinitialize after deserialization
        while (true) {
            System.out.println("\n=== Tuition Tracker By Sayem ===");
            System.out.println("1. Add New Student");
            System.out.println("2. Add Month to Student");
            System.out.println("3. Add Class to Month");
            System.out.println("4. View Student Information");
            System.out.println("5. Update Student");
            System.out.println("6. Delete Student");
            System.out.println("7. Exit");
            System.out.print("Choose (1-7): ");

            try {
                int choice = Integer.parseInt(input.nextLine());

                switch (choice) {
                    case 1 -> addStudent();
                    case 2 -> addMonthToStudent();
                    case 3 -> addClassToMonth();
                    case 4 -> displayStudentInfo();
                    case 5 -> updateStudent();
                    case 6 -> deleteStudent();
                    case 7 -> {
                        saveData();
                        System.out.println("Thank you! Data saved.");
                        return;
                    }
                    default -> System.out.println("Invalid option!");
                }

            } catch (NumberFormatException e) {
                System.out.println("Please enter a number.");
            }
        }
    }
}
