public class SavingsAccount extends BankAccount{

    private double minimumBalance = 500;
    @Override
    public void Withdraw() {
        System.out.print("Enter the Amount to Withdraw: ");
        double amount = input.nextDouble();
        if(amount <= 0){
            System.out.println("Invalid Amount");
            return;
        }
        esle if (balance - amount >= minimumBalance) {
            balance = balance - amount;
            System.out.println("TK "+amount+" Withdraw Successful");
            System.out.println("Current Balance: " + balance);
        } else {
            System.out.println("Insufficient Balance");
        }
    }


}