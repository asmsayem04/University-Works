
public class CurrentAccount extends BankAccount {

    private double overdraftLimit = -1000;

    @Override
    public void Withdraw() {
        System.out.println("Enter the Amount to Withdraw");
        double amount = input.nextDouble();
        if (balance - amount >= overdraftLimit) {
            balance = balance - amount;
            System.out.println("TK "+amount+" Withdraw Successful");
            System.out.println("Current Balance: " + balance);
        } else {
            System.out.println("Insufficient Balance");
        }
    }
    
}
