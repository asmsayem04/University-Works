
import java.util.Scanner;

public class Bank {

    private BankAccount[] accounts = new BankAccount[10000];
    private int accountCount = 0;
    private Scanner input = new Scanner(System.in);

    private void selectAccType() {
        int choice;

        do {
            System.out.println("Select Account Type");
            System.out.println("1. Savings Account");
            System.out.println("2. Current Account");
            System.out.println("Enter your choice: ");
            System.out.print("Waiting for your Response......");

            choice = input.nextInt();
            if (choice == 1) {
                accounts[accountCount] = new SavingsAccount();
                break;
            } else if (choice == 2) {
                accounts[accountCount] = new CurrentAccount();
                break;
            } else {
                System.out.println("Invalid Choice");
            }
        } while (choice != 1 && choice != 2);

    }

    private void creatAccount() {

        if (accountCount >= 10000) {
            System.out.println(
                    "We are Currently not accepting any new account\nContact with the bank for more information");
            return;
        }

        selectAccType();
        input.nextLine();
        System.out.print("Enter the Account Holder Name: ");
        accounts[accountCount].setAccountHolderName(input.nextLine());

        System.out.print("Enter The NID: ");
        accounts[accountCount].setNID(input.nextLine());

        System.out.print("Enter The Address: ");
        accounts[accountCount].setAddress(input.nextLine());

        System.out.print("Enter The Initial Balance: ");
        accounts[accountCount].setBalance(input.nextDouble());

        System.out.println("Your account created successfully");
        System.out.println("Your Account Number is: " + accounts[accountCount].setAccountNumber());

        accountCount++;
    }

    private void depositToAccount() {
        System.out.print("Enter Account Number: ");
        String accNum = input.next();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber().equals(accNum)) {
                accounts[i].Deposit();
                return;
            }
        }
        System.out.println("Account Not Found");
    }

    private void withdrawFromAccount() {
        System.out.print("Enter Account Number: ");
        String accNum = input.next();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber().equals(accNum)) {
                accounts[i].Withdraw();
                return;
            }
        }
        System.out.println("Account Not Found");
    }

    private void showBalance() {
        System.out.print("Enter Account Number: ");
        String accNum = input.next();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber().equals(accNum)) {
                System.out.println("Balance: " + accounts[i].getBalance());
                return;
            }
        }
        System.out.println("Account Not Found");
    }

    private void showAccountInfo() {
        System.out.print("Enter Account Number or NID: ");
        String srcID = input.next();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber().equals(srcID) || accounts[i].getNID().equals(srcID)) {
                System.out.println("Account Holder Name: " + accounts[i].getAccountHolderName());
                System.out.println("Account Number: " + accounts[i].getAccountNumber());
                System.out.println("NID: " + accounts[i].getNID());
                System.out.println("Address: " + accounts[i].getAddress());
                System.out.println("Balance: " + accounts[i].getBalance());
                return;
            }
        }
        System.out.println("Account Not Found");
    }

    protected void showMenu() {

        System.out.println("*******************************************************");
        System.out.println("**  Select the Following Option:                     **");
        System.out.println("**                                                   **");
        System.out.println("**  1. Create Account                                **");
        System.out.println("**  2. Deposit                                       **");
        System.out.println("**  3. Withdraw                                      **");
        System.out.println("**  4. Show Balance                                  **");
        System.out.println("**  5. Display Account Info                          **");
        System.out.println("**  6. Exit                                          **");
        System.out.println("*******************************************************");
        System.out.println("*******************************************************");
        System.out.println();
        System.out.println("Enter your choice: ");
        System.out.print("Waiting for your Response......  ");
    }

    protected void welcomeMessage() {
        System.out.println("*******************************************************");
        System.out.println("*******************************************************");
        System.out.println("**  Welcome to SB Bank                               **");
        System.out.println("**  Number 1 Bank in the country                     **");

    }

    public void runBank() {
        int choice;
        do {

            choice = input.nextInt();

            switch (choice) {
                case 1:
                    creatAccount();
                    showMenu();
                    break;
                case 2:
                    depositToAccount();
                    showMenu();
                    break;
                case 3:
                    withdrawFromAccount();
                    showMenu();
                    break;
                case 4:
                    showBalance();
                    showMenu();
                    break;
                case 5:
                    showAccountInfo();
                    showMenu();
                    break;
                case 6:
                    System.out.println("Exiting.......\nThank you for using SB Bank");
                    break;
                default:
                    System.out.println("Invalid Choice");
                    showMenu();
                    break;
            }
        } while (choice != 6);
    }
}
