# Bank Management System

## Overview
This is a simple Java-based Bank Management System that allows users to create, manage, and interact with different types of bank accounts. The system supports both Savings Accounts and Current Accounts, implementing basic banking functionalities like deposits, withdrawals, and balance inquiries.

This project was created for a lab task to demonstrate the four pillars of Object-Oriented Programming (OOP) in the OOP course. It is not an industry project. Created by A S M Sayem.

## Features
- Create new bank accounts (Savings and Current)
- Deposit funds into an account
- Withdraw funds from an account (with constraints on minimum balance for Savings and overdraft for Current accounts)
- Display account balance
- Show account information

## Classes
### 1. `BankAccount.java`
This is the base class for all types of bank accounts. It contains common attributes and methods such as:
- Account Holder Name
- National ID (NID)
- Address
- Balance
- Account Number (auto-generated)
- Deposit and Withdraw functions (overridden in subclasses)

### 2. `SavingsAccount.java`
This class extends `BankAccount` and enforces a minimum balance requirement of 500. If a withdrawal causes the balance to fall below this threshold, the transaction is denied.

### 3. `CurrentAccount.java`
This class extends `BankAccount` and allows overdrafts up to a limit of -1000. Withdrawals are permitted as long as the balance does not exceed this overdraft limit.

### 4. `Bank.java`
This class acts as the main interface for users. It provides a menu-driven system that allows users to:
- Create an account
- Deposit funds
- Withdraw funds
- Check balance
- View account details
- Exit the system

## How to Run
1. Compile all Java files using:
   ```sh
   javac Bank.java BankAccount.java CurrentAccount.java SavingsAccount.java
   ```
2. Run the program:
   ```sh
   java Main
   ```
3. Follow on-screen instructions to interact with the banking system.

## Constraints
- Savings accounts must maintain a minimum balance of 500.
- Current accounts allow overdrafts up to -1000.
- Maximum of 10,000 accounts can be created.

