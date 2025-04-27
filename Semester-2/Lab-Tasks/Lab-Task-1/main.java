public class Main {

    public static void main( String [] args)
    {

        private Student[] students = new Student[10];
        private int studentCount = 0;


        Scanner input = new Scanner(System.in);

        System.out.println("Enter The Credintials of the Students ");

        for (int i = 0; i < 10; i++) {
            System.out.print("Enter Name: ");
            String name = input.nextLine();
            System.out.print("Enter ID: ");
            String id = input.nextLine();
            System.out.print("Enter Department: ");
            String department = input.nextLine();
            System.out.print("Enter Age: ");
            int age = input.nextInt();
            System.out.print("Enter CGPA: ");
            double cgpa = input.nextDouble();
            System.out.print("Enter Email: ");
            String email = input.nextLine();
            System.out.print("Enter Semester: ");
            int semester = input.nextInt();

            students[studentCount] = new Student(name, id, department, age, cgpa, email, semester);
            studentCount++;
        }

        
    }

}