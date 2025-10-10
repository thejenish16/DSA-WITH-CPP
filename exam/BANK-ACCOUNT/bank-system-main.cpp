#include "bank-system.cpp"

main()
{
    int choice;
    cout << "1. Savings Account\n2. Checking Account\n3. Fixed Deposit Account\nChoice: ";
    cin >> choice;

    if (choice == 1)
    {
        SavingsAccount s;
        s.setAccountDetails();
        s.deposit();
        s.displayAccountDetails();
        s.setInterestRate(5);
        s.calculateInterest();
    }
    else if (choice == 2)
    {
        CheckingAccount c;
        c.setAccountDetails();
        c.deposit();
        c.displayAccountDetails();
        c.setOverdraftLimit(5000);
        float withdrawAmt;
        cout << "Enter amount to check overdraft: ";
        cin >> withdrawAmt;
        c.checkOverdraft(withdrawAmt);
    }
    else if (choice == 3)
    {
        FixedDepositAccount f;
        f.setAccountDetails();
        f.deposit();
        f.displayAccountDetails();
        f.setTerm(12);
        f.calculateInterest(7);
    }
    else
    {
        cout << "Invalid Choice!" << endl;
    }
}
