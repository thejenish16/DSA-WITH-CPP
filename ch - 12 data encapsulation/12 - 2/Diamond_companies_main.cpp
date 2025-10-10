#include "Diamond_companies.cpp"

int main()
{
    // Object creation with arguments (Parameterized constructor)
    DiamondCompany c1(101, "Shree Diamonds", 250, 1200000, 5000, 3000, "Rajesh Mehta");
    DiamondCompany c2(102, "Star Gems", 150, 800000, 2000, 1500, "Anita Shah");
    DiamondCompany c3(103, "Royal Exports", 300, 2000000, 7000, 6000, "Vikram Patel");

    // Display details
    c1.displayInfo();
    c2.displayInfo();
    c3.displayInfo();

    return 0;
}
