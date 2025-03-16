
import java.util.Scanner;

public class BankAccount {

    private String accountHolderName;
    private String NID;
    private String address;
    protected double balance;
    private String accountNumber;

    protected Scanner input = new Scanner(System.in);

    public void Withdraw() {

        System.out.print("Enter the Amount to Withdraw:");
        double amount = input.nextDouble();
        if (amount <= 0) {
            System.out.println("Invalid Amount");
        } else if (balance - amount < 0) {
            System.out.println("Insufficient Balance");
        } else {
            balance = balance - amount;
            System.out.println("TK " +amount+" Withdraw Successful");
            System.out.println("Current Balance: " + balance);
        }
    }

    public void Deposit() {
        System.out.print("Enter the Amount to Deposit:  ");
        double amount = input.nextDouble();
        if (amount <= 0) {
            System.out.println("Invalid Amount");
        } else {
            balance = balance + amount;
            System.out.println("Tk "+amount+" Deposit Successful");
            System.out.println("Current Balance: " + balance);
        }

    }

    public void setAccountHolderName(String accountHolderName) {
        this.accountHolderName = accountHolderName;
    }

    public String getAccountHolderName() {
        return accountHolderName;
    }

    public void setNID(String NID) {
        this.NID = NID;
    }

    public String getNID() {
        return NID;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getAddress() {
        return address;
    }

    public void setBalance(double balance) {

        if (balance < 0) {
            System.out.println("Invalid Balance");
            return;
        }
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public String setAccountNumber() {
        accountNumber = "SB" + (int) (Math.random() * 1000000);
        return accountNumber;
    }

    public String getAccountNumber() {
        return accountNumber;
    }
}
