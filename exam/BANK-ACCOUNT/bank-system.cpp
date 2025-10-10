#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
protected:
    long long int accountNumber;
    char accountHolderName[150];
    float balance;

public:
    void setAccountDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        fflush(stdin);
        cout << "Enter Account Holder Name: ";
        gets(accountHolderName);
        balance = 0;
    }

    void deposit()
    {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter Withdraw Amount: ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
        }
    }

    float getBalance()
    {
        return balance;
    }

    void displayAccountDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Savings Account
class SavingsAccount : public BankAccount
{
    float interestRate;

public:
    void setInterestRate(float rate)
    {
        interestRate = rate;
    }
    void calculateInterest()
    {
        float interest = balance * (interestRate / 100);
        cout << "Interest Earned: " << interest << endl;
    }
};

// Checking Account
class CheckingAccount : public BankAccount
{
    float overdraftLimit;

public:
    void setOverdraftLimit(float limit)
    {
        overdraftLimit = limit;
    }
    void checkOverdraft(float amount)
    {
        if (amount > (balance + overdraftLimit))
        {
            cout << "Overdraft Limit Exceeded!" << endl;
        }
        else
        {
            cout << "Withdrawal Allowed under Overdraft Policy." << endl;
        }
    }
};

// Fixed Deposit Account
class FixedDepositAccount : public BankAccount
{
    int term; // months

public:
    void setTerm(int t)
    {
        term = t;
    }
    void calculateInterest(float rate)
    {
        float interest = balance * (rate / 100) * (term / 12.0);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};
