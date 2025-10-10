#include <iostream>
#include <string.h>
using namespace std;

class EmployeeBase
{
protected:
    int empId;
    char empName[30];
    char empPosition[30];
    double empSalary;
    int years;
    char orgName[40];
    char empAddress[60];
    char empEmail[50];
    double phone;

public:
    void inputBasic()
    {
        cout << "Enter Employee Id: ";
        cin >> empId;
        cin.ignore();
        cout << "Enter Employee Name: ";
        cin.getline(empName, 30);
        cout << "Enter Position: ";
        cin.getline(empPosition, 30);
    }
};

class EmployeeExtra : public EmployeeBase
{
public:
    void inputJob()
    {
        cout << "Enter Salary: ";
        cin >> empSalary;
        cout << "Enter Years of Experience: ";
        cin >> years;
        cin.ignore();
    }
};

class EmployeeOrg : public EmployeeExtra
{
public:
    void inputOrg()
    {
        cout << "Enter Organization Name: ";
        cin.getline(orgName, 40);
        cout << "Enter Address: ";
        cin.getline(empAddress, 60);
    }

    void showBasic()
    {
        cout << endl
             << "Employee Info" << endl;
        cout << "Name: " << empName << endl;
        cout << "Position: " << empPosition << endl;
        cout << "Salary: " << empSalary << endl;
    }
};

class EmployeeContact : public EmployeeOrg
{
public:
    void inputContact()
    {
        cout << "Enter Email: ";
        cin.getline(empEmail, 50);
        cout << "Enter Phone: ";
        cin >> phone;
    }

    void showAll()
    {
        cout << endl
             << "Employee Full Details" << endl;
        cout << "Id: " << empId << endl;
        cout << "Name: " << empName << endl;
        cout << "Position: " << empPosition << endl;
        cout << "Salary: " << empSalary << endl;
        cout << "Experience: " << years << endl;
        cout << "Organization: " << orgName << endl;
        cout << "Address: " << empAddress << endl;
        cout << "Email: " << empEmail << endl;
        cout << "Phone: " << phone << endl;
    }
};
