#include <iostream>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    char hotel_name[50];
    char hotel_type[20];
    char hotel_rating[20];
    char hotel_location[30];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    void setHotelData()
    {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;

        cout << "Enter Hotel Name (no spaces): ";
        cin >> hotel_name;

        cout << "Enter Hotel Type (Hotel/Motel, no spaces): ";
        cin >> hotel_type;

        cout << "Enter Hotel Rating (1Star to 7Star): ";
        cin >> hotel_rating;

        cout << "Enter Hotel Location (no spaces): ";
        cin >> hotel_location;

        cout << "Enter Establish Year: ";
        cin >> hotel_establish_year;

        cout << "Enter Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Room Quantity: ";
        cin >> hotel_room_quantity;

        return;
    }

    void getHotelData()
    {
        cout << "\nHotel ID: " << hotel_id;
        cout << "\nHotel Name: " << hotel_name;
        cout << "\nHotel Type: " << hotel_type;
        cout << "\nHotel Rating: " << hotel_rating;
        cout << "\nHotel Location: " << hotel_location;
        cout << "\nEstablish Year: " << hotel_establish_year;
        cout << "\nStaff Quantity: " << hotel_staff_quantity;
        cout << "\nRoom Quantity: " << hotel_room_quantity;
        cout << "\n";

        return;
    }

    static void displayTitle()
    {
        cout << "\n\n==============================\n";
        cout << "THESE ARE THE DETAILS FILLED\n";
        cout << "==============================\n";
        return;
    }
};

int main()
{
    static Hotel h[10];
    int n;

    cout << "Enter Number of Hotels (max 10): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        h[i].setHotelData();
    }

    Hotel::displayTitle();

    for (int i = 0; i < n; i++)
    {
        h[i].getHotelData();
    }

    return 0;
}
