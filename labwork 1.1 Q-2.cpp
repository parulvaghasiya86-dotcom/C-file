#include <iostream>
using namespace std;

int main() {
    int SY, EY;

    cout << "Enter start year: ";
    cin >> SY;

    cout << "Enter end year: ";
    cin >> EY;

    cout << "Leap years between " << SY << " and " << EY << " are: ";

    for (int y = SY; y <= EY; y++) {

        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            cout << y << " ";
        }
    }

}
