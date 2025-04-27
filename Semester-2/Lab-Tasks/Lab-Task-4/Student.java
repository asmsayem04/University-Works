public class Student {

    private String name;
    private String id;
    private String department;
    private int age;
    private double cgpa;
    private String email;
    private int semester;

    public String getName() {
        return name;
    }

    public String getId() {
        return id;
    }

    public String getDepartment() {
        return department;
    }

    public int getAge() {
        return age;
    }

    public double getCgpa() {
        return cgpa;
    }

    public String getEmail() {
        return email;
    }

    public int getSemester() {
        return semester;
    }

    public Student(String name, String id, String department, int age, double cgpa, String email, int semester) {
        this.name = name;
        this.id = id;
        this.department = department;
        this.age = age;
        this.cgpa = cgpa;
        this.email = email;
        this.semester = semester;
    }


}
