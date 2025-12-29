#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    Student()
    {
        name = "";
        rollNo = 0;
    }

    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    Student(const Student &s)
    {
        name = s.name;
        rollNo = s.rollNo;
    }

    int getRollNo() const
    {
        return rollNo;
    }

    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class StudentRecordManager
{
private:
    Student *students;
    int capacity;
    int count;

public:
    StudentRecordManager(int cap)
    {
        capacity = cap;
        count = 0;
        students = new Student[capacity];
    }

    void addStudent(const Student &s)
    {
        if (count < capacity)
        {
            students[count] = s;
            count++;
        }
        else
        {
            cout << "Record Full" << endl;
        }
    }

    void displayAll() const
    {
        if (count == 0)
        {
            cout << "No student records available" << endl;
            return;
        }

        for (int i = 0; i < count; i++)
        {
            cout << "\nStudent " << i + 1 << endl;
            students[i].display();
        }
    }

    void searchByRoll(int roll) const
    {
        for (int i = 0; i < count; i++)
        {
            if (students[i].getRollNo() == roll)
            {
                cout << "\nStudent Found" << endl;
                students[i].display();
                return;
            }
        }
        cout << "Student not found" << endl;
    }

    ~StudentRecordManager()
    {
        delete[] students;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    StudentRecordManager manager(n);

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;

        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        Student s(name, roll);
        manager.addStudent(s);
    }

    cout << "\n--- All Student Records ---" << endl;
    manager.displayAll();

    int searchRoll;
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;

    manager.searchByRoll(searchRoll);

    return 0;
}
