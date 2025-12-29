#include <iostream>
using namespace std;

class P {
public:
    float temperature;
};

class Q : public P {
public:
    void toFahrenheit() {
        cout << "Temperature in Fahrenheit = " << (temperature * 9 / 5) + 32 << endl;
    }
};

class R : public Q {
public:
    void toKelvin() {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;

        cout << "Converting Celsius to Fahrenheit..." << endl;
        toFahrenheit();

        cout << "Converting Fahrenheit to Kelvin..." << endl;
        cout << "Temperature in Kelvin = " << temperature + 273.15;
    }
};

int main() {
    R obj;
    obj.toKelvin();
    return 0;
}
