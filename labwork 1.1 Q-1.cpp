#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
	cout << "Even numbers are: ";
	for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
        cout << arr[i] << " ";
    }
}


}
