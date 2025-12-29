#include <iostream>
using namespace std;

class RBI {
public:
    float rate;
};

class SBI : public RBI {
public:
    void getROI() {
        rate = 6.5;
        cout << "The interest rate of SBI is: " << rate << "%" << endl;
    }
};

class BOB : public RBI {
public:
    void getROI() {
        rate = 6.75;
        cout << "The interest rate of BOB is: " << rate << "%" << endl;
    }
};

class ICICI : public RBI {
public:
    void getROI() {
        rate = 6.2;
        cout << "The interest rate of ICICI is: " << rate << "%" << endl;
    }
};

int main() {
    SBI s;
    s.getROI();
    
    BOB b;
    b.getROI();
    
    ICICI i;
    i.getROI();
}
