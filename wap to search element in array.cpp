//write a program to search an element in an array
#include <iostream>
using namespace std;

int main() {
    int n, se, found = 0;

    // Ask user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create an array with 'n' elements
    int arr[n];

    // Input elements into the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Ask user for the element to search
    cout << "Enter the element to search: ";
    cin >> se;

    // Search the element in the array
    for (int i = 0; i < n; ++i) {
        if (arr[i] == se)
		 {
            cout << "Element " << se << " found at position " << i + 1 << "." << endl;
            found = 1;
            break;
        }
    }

    // If the element is not found in the array
    if (!found) {
        cout << "Element " << se << " not found in the array." << endl;
    }

    return 0;
}

