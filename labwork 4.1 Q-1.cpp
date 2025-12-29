#include <iostream>
using namespace std;

class X {
public:
    int a, b, c;
};

class Y : public X {
public:
    void setData() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
    }

    void getData() {
        cout << "Cube of first number = " << a*a*a << endl;
        cout << "Cube of second number = " << b*b*b << endl;
        cout << "Cube of third number = " << c*c*c << endl;
        cout << "Sum of all cubes = " << a*a*a + b*b*b + c*c*c;
    }
};

int main() {
    Y obj;
    obj.setData();
    obj.getData();
    return 0;
}
