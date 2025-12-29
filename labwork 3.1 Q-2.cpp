#include <iostream>
using namespace std;

class Customer {
private:
    int id;
    int age;
    long long mobile;
    int validity;
    string name;
    string city;
    string brand;

public:
    void setData() {
        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "City: ";
        cin >> city;

        cout << "Mobile Number: ";
        cin >> mobile;

        cout << "Simcard Validity (years): ";
        cin >> validity;

        cout << "Telecom Brand: ";
        cin >> brand;
    }

    void showData() {
        cout << id << " "
             << name << " "
             << age << " "
             << city << " "
             << mobile << " "
             << validity << " "
             << brand << endl;
    }
};

int main() {
    Customer c[5];  

    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Customer " << i + 1 << endl;
        c[i].setData();  
    }

    cout << "\nCustomer Records\n";
    for (int i = 0; i < 5; i++) {
        c[i].showData();  
    }
}
