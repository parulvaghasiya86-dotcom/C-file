#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers to divide: ";
    cin >> a >> b;
    try
    {
        if (b == 0) throw 1;
        cout << "Result: " << a / b << endl;
    }
    catch (...)
    {
        cout << "Cannot divide by zero" << endl;
    }

    int age;
    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if (age < 18) throw 1;
        cout << "Eligible to vote" << endl;
    }
    catch (...)
    {
        cout << "Not eligible to vote" << endl;
    }

    char password[50];
    cout << "Enter your password: ";
    cin >> password;
    try
    {
        int upper = 0;
        for (int i = 0; password[i] != '\0'; i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                upper = 1;
                break;
            }
        }
        if (upper == 0) throw 1;
        cout << "Password is valid" << endl;
    }
    catch (...)
    {
        cout << "Password must contain an uppercase letter" << endl;
    }

    return 0;
}
