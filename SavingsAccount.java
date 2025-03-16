
public class SavingsAccount extends BankAccount {

    @Override
    public double withdrew(double amount) {

        if(amount < 0) {
            System.out.println("Invalid Amount");
        } else{
        if (balance < 500) {
            System.out.println("Insufficient Balance");
        } else {
            balance = balance - amount;
        }
    }
    }

}
