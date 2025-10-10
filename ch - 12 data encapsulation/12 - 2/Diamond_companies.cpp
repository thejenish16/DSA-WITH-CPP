#include <iostream>
#include <string>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    // Parameterized Constructor
    DiamondCompany(int id, string name, int staff, double revenue,
                   int importDiamonds, int exportDiamonds, string ceo)
    {
        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw_diamonds = importDiamonds;
        comp_export_diamonds = exportDiamonds;
        comp_ceo = ceo;
    }

    // Function to display company details
    void displayInfo()
    {
        cout << "\n--- Company Information ---" << endl;
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Annual Revenue: " << comp_revenue << endl;
        cout << "Raw Diamonds Imported (per year): " << comp_import_raw_diamonds << endl;
        cout << "Diamonds Exported (per year): " << comp_export_diamonds << endl;
        cout << "CEO: " << comp_ceo << endl;
    }
};
