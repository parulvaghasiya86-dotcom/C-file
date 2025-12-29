#include <iostream>
using namespace std;

class Admin {
private:
    long long total_annual_revenue;   // private ? not inherited

protected:
    char company_name[50];
    int total_staff;
    int employee_salary;

public:
    int manager_salary;
    bool can_terminate;

    void getAdminData() {
        cout << "\nEnter Company Name: ";
        cin >> company_name;

        cout << "Enter Manager Salary: ";
        cin >> manager_salary;

        cout << "Enter Employee Salary: ";
        cin >> employee_salary;

        cout << "Enter Total Staff: ";
        cin >> total_staff;

        cout << "Enter Total Annual Revenue: ";
        cin >> total_annual_revenue;

        cout << "Can Terminate (1-Yes / 0-No): ";
        cin >> can_terminate;
    }

    virtual void myAccess() {
        cout << "\n\n[ADMIN ACCESS]";
        cout << "\nCompany Name: " << company_name;
        cout << "\nManager Salary: " << manager_salary;
        cout << "\nEmployee Salary: " << employee_salary;
        cout << "\nTotal Staff: " << total_staff;
        cout << "\nAnnual Revenue: " << total_annual_revenue;
        cout << "\nCan Terminate: " << can_terminate;
    }
};

class Manager : public Admin {
public:
    void myAccess() override {
        cout << "\n\n[MANAGER ACCESS]";
        cout << "\nCompany Name: " << company_name;
        cout << "\nManager Salary: " << manager_salary;
        cout << "\nEmployee Salary: " << employee_salary;
        cout << "\nTotal Staff: " << total_staff;
        cout << "\nCan Terminate: " << can_terminate;
        cout << "\nAnnual Revenue: Access Denied";
    }
};

class Employee : public Manager {
public:
    void myAccess() override {
        cout << "\n\n[EMPLOYEE ACCESS]";
        cout << "\nCompany Name: " << company_name;
        cout << "\nEmployee Salary: " << employee_salary;
        cout << "\nTotal Staff: " << total_staff;

        cout << "\nManager Salary: Access Denied";
        cout << "\nCan Terminate: Access Denied";
        cout << "\nAnnual Revenue: Access Denied";
    }
};

int main() {
    Admin a;
    Manager m;
    Employee e;

    cout << "\n--- Enter Admin Details ---";
    a.getAdminData();

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}
