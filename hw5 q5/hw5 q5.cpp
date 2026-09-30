// hw5 q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void displayLessThanN(int arr[], int size, int n) {
    cout << "\nValues less than " << n << ":\n";
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] < n) {
            cout << arr[i] << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter number of elements in the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> arr[i];
    }

    int n;
    cout << "\nEnter the comparison number (n): ";
    cin >> n;
    displayLessThanN(arr, size, n);

    return 0;
}
