#include <iostream>
using namespace std;

class Employee {
protected:
    int employee_id;
    char name[50];
    int age;
    double salary;
public:
    Employee(int id, const char* n, int a, double s) : employee_id(id), age(a), salary(s) {
        int i = 0;
        while (n[i] != '\0' && i < 49) {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }
    virtual ~Employee() {}
    void setId(int id) { employee_id = id; }
    void setName(const char* n) {
        int i = 0;
        while (n[i] != '\0' && i < 49) {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }
    void setAge(int a) { age = a; }
    void setSalary(double s) { salary = s; }
    int getId() { return employee_id; }
    const char* getName() { return name; }
    int getAge() { return age; }
    double getSalary() { return salary; }
    virtual void display() {
        cout << "ID: " << employee_id << ", Name: " << name
             << ", Age: " << age << ", Salary: " << salary;
    }
};

class FullTimeEmployee : public Employee {
private:
    double bonus;
public:
    FullTimeEmployee(int id, const char* n, int a, double s, double b)
        : Employee(id, n, a, s), bonus(b) {}
    void setBonus(double b) { bonus = b; }
    double getBonus() { return bonus; }
    void display() override {
        Employee::display();
        cout << ", Bonus: " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    int hours_worked;
public:
    PartTimeEmployee(int id, const char* n, int a, double s, int h)
        : Employee(id, n, a, s), hours_worked(h) {}
    void setHoursWorked(int h) { hours_worked = h; }
    int getHoursWorked() { return hours_worked; }
    void display() override {
        Employee::display();
        cout << ", Hours Worked: " << hours_worked << endl;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee* employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;
    do {
        cout << "\nEmployee Management System Menu:\n";
        cout << "1. Add Employee\n2. Display All Employees\n3. Delete Employee\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int type;
            cout << "Enter 1 for FullTimeEmployee, 2 for PartTimeEmployee: ";
            cin >> type;

            int id, age, hours;
            char name[50];
            double salary, bonus;

            cout << "Enter Employee ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            cin.getline(name, 50);
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;

            if (type == 1) {
                cout << "Enter Bonus: ";
                cin >> bonus;
                employees[count++] = new FullTimeEmployee(id, name, age, salary, bonus);
            } else if (type == 2) {
                cout << "Enter Hours Worked: ";
                cin >> hours;
                employees[count++] = new PartTimeEmployee(id, name, age, salary, hours);
            } else {
                cout << "Invalid employee type!" << endl;
            }
            break;
        }

        case 2: {
            if (count == 0) {
                cout << "No employees to display." << endl;
            } else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". ";
                    employees[i]->display();
                }
            }
            break;
        }

        case 3: {
            if (count == 0) {
                cout << "No employees to delete." << endl;
                break;
            }
            int delId;
            cout << "Enter Employee ID to delete: ";
            cin >> delId;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (employees[i]->getId() == delId) {
                    delete employees[i];
                    for (int j = i; j < count - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    count--;
                    cout << "Employee deleted successfully!" << endl;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Employee not found!" << endl;
            break;
        }

        case 4: {
            for (int i = 0; i < count; i++) {
                delete employees[i];
            }
            cout << "Exiting program..." << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
