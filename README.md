# friend-function

You are tasked with creating a C++ program that manages a simple BankAccount. The BankAccount class should store the account holder's name and balance.

You will implement the following:

A BankAccount class with private members for name and balance, and a constructor.

A display_balance member function that is declared const because it only reads the balance and does not modify the object's state.

A friend function named apply_interest that calculates and applies a simple interest to the account balance. This function must be a friend so it can directly modify the private balance member.

# Requirements

The BankAccount class should have a private string member for account_holder and a private double member for balance.

The constructor should initialize these members.

The display_balance function must be marked with const.

The apply_interest function must be declared as a friend of the BankAccount class within the class definition.

The apply_interest function should accept a BankAccount object reference and an interest rate (double) as parameters.

# In your main function:

Create a BankAccount object.

Call display_balance to show the initial balance.

Call the apply_interest friend function to update the balance.

Call display_balance again to show the updated balance.
