import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;

public class MonthlyInfo implements Serializable {
    private static final long serialVersionUID = 1L;
    private String nameOfMonth;
    private int plannedClassesThisMonth;
    private List<String> classesTakenThisMonth;

    public MonthlyInfo(String nameOfMonth, int planned) {
        this.nameOfMonth = nameOfMonth;
        this.plannedClassesThisMonth = planned;
        this.classesTakenThisMonth = new ArrayList<>();
    }

    public String getNameOfMonth() {
        return nameOfMonth;
    }

    public int getPlannedClassesThisMonth() {
        return plannedClassesThisMonth;
    }

    public List<String> getClassesTakenThisMonth() {
        return classesTakenThisMonth;
    }

    public int getExtraClassesThisMonth() {
        return classesTakenThisMonth.size() - plannedClassesThisMonth;
    }

    public void addClass(String date) {
        classesTakenThisMonth.add(date);
    }

    public boolean removeClass(String date) {
        return classesTakenThisMonth.remove(date);
    }

    public void setNameOfMonth(String nameOfMonth) {
        this.nameOfMonth = nameOfMonth;
    }

}
