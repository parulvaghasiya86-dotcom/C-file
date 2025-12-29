#include <iostream>
using namespace std;

class Student {
private:
    int id;
    int age;
    string name;
    string course;
    string city;
    string email;
    string college;

public:
    void setData() {
        cout << "ID: ";
        cin >> id;

        cout << "Name: ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Course: ";
        cin >> course;

        cout << "City: ";
        cin >> city;

        cout << "Email: ";
        cin >> email;

        cout << "College: ";
        cin >> college;
    }

    void showData() {
        cout << id << " "
             << name << " "
             << age << " "
             << course << " "
             << city << " "
             << email << " "
             << college << endl;
    }
};

int main() {
    Student s[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter details for Student " << i + 1 << endl;
        s[i].setData();  
    }

    for (int i = 0; i < 5; i++) {
        s[i].setData();
    }

    for (int i = 0; i < 5; i++) {
        s[i].showData();
    }
}
