#include <iostream>
using namespace std;

class Car
{
public:
    int id;
    char company[20];
    char colour[20];
    char model[20];
    int releaseYear;

    void getDetails()
    {
        cout << "Enter Car ID: ";
        cin >> id;
        cout << "Enter Company Name (single word): ";
        cin >> company;
        cout << "Enter Colour (single word): ";
        cin >> colour;
        cout << "Enter Model (single word): ";
        cin >> model;
        cout << "Enter Release Year: ";
        cin >> releaseYear;
        cout << endl;
    }

    void showDetails()
    {
        cout << "Car ID: " << id << endl;
        cout << "Company: " << company << endl;
        cout << "Colour: " << colour << endl;
        cout << "Model: " << model << endl;
        cout << "Release Year: " << releaseYear << endl << endl;
    }
};

int main()
{
    Car car1, car2, car3, car4;

    cout << "Enter details for Car 1\n";
    car1.getDetails();

    cout << "Enter details for Car 2\n";
    car2.getDetails();

    cout << "Enter details for Car 3\n";
    car3.getDetails();

    cout << "Enter details for Car 4\n";
    car4.getDetails();

    cout << "\n=== Car Records ===\n";
    car1.showDetails();
    car2.showDetails();
    car3.showDetails();
    car4.showDetails();
}
