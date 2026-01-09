#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "All numbers are equal." << endl;
    } else {
        int largest = a;
        if (b > largest) largest = b;
        if (c > largest) largest = c;
        int smallest = a;
        if (b < smallest) smallest = b;
        if (c < smallest) smallest = c;

        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
        cout << "The numbers are not all equal." << endl;
    }

    return 0;
}
