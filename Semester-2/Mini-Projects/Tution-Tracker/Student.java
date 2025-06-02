import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class Student implements Serializable {
    private static final long serialVersionUID = 1L;

    private String name;
    private String phoneNumber;
    private int plannedClassesPerMonth;
    private List<MonthlyInfo> monthlyInfoList;

    public Student(String name, String phone, int planned)
            throws NameTooLongException, InvalidPhoneNumberException, NegativePlannedClassException {
        setName(name);
        setPhoneNumber(phone);
        setPlannedClassesPerMonth(planned);
        this.monthlyInfoList = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public int getPlannedClassesPerMonth() {
        return plannedClassesPerMonth;
    }

    public List<MonthlyInfo> getMonthlyInfo() {
        return monthlyInfoList;
    }

    public void addMonthlyInfo(MonthlyInfo info) {
        monthlyInfoList.add(info);
    }

    public void setName(String name) throws NameTooLongException {
        if (name.length() > 50) {
            throw new NameTooLongException("Student name cannot be more than 50 characters.");
        }
        this.name = name;
    }

    public void setPhoneNumber(String phoneNumber) throws InvalidPhoneNumberException {
        if (phoneNumber.length() < 11 || phoneNumber.length() > 14) {
            throw new InvalidPhoneNumberException("Phone number must be between 11 and 14 characters.");
        }
        this.phoneNumber = phoneNumber;
    }

    public void setPlannedClassesPerMonth(int plannedClassesPerMonth) throws NegativePlannedClassException , ClassExicdTheMonthException{
        if (plannedClassesPerMonth < 0) {
            throw new NegativePlannedClassException("Planned classes per month cannot be negative.");
        }
        if(plannedClassesPerMonth>30){
            throw new ClassExicdTheMonthException("Planned Classes can't be more than 30");
        }
        this.plannedClassesPerMonth = plannedClassesPerMonth;
    }
}
