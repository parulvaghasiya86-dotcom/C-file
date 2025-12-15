#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    char name[20];
    int age;
    char role[20];
    float salary;
    char city[20];
    int experience;
    char company[20];

    void getDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name (single word): ";
        cin >> name;
        cout << "Enter Employee Age: ";
        cin >> age;
        cout << "Enter Employee Role (single word): ";
        cin >> role;
        cout << "Enter Employee Salary: ";
        cin >> salary;
        cout << "Enter Employee City (single word): ";
        cin >> city;
        cout << "Enter Employee Experience (years): ";
        cin >> experience;
        cout << "Enter Company Name (single word): ";
        cin >> company;
        cout << endl;
    }

    void showDetails()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Role: " << role << endl;
        cout << "Salary: " << salary << endl;
        cout << "City: " << city << endl;
        cout << "Experience: " << experience << " years" << endl;
        cout << "Company: " << company << endl << endl;
    }
};

int main()
{
    Employee emp1, emp2, emp3, emp4, emp5;

    emp1.getDetails();
    emp2.getDetails();
    emp3.getDetails();
    emp4.getDetails();
    emp5.getDetails();

    cout << "\n=== Employee Report ===\n";
    emp1.showDetails();
    emp2.showDetails();
    emp3.showDetails();
    emp4.showDetails();
    emp5.showDetails();
}
