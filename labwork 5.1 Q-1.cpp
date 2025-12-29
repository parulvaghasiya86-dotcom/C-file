#include <iostream>
using namespace std;

class operations {
};

class calculate : public operations {
public:
    void cal(int a, int b) {
        cout << "Division = " << (float)a / b << endl;
    }

    void cal(int c, int d, int e) {
        cout << "Subtraction = " << (c - d - e) << endl;
    }

    void cal(int f, int g, int h, int i) {
        cout << "Multiplication = " << (f * g * h * i) << endl;
    }

    void cal(int j, int k, int l, int m, int n) {
        cout << "Addition = " << (j + k + l + m + n) << endl;
    }
};

int main() {
    calculate c;

    c.cal(10, 2);
    c.cal(20, 5, 3);
    c.cal(2, 3, 4, 5);
    c.cal(1, 2, 3, 4, 5);

    return 0;
}
