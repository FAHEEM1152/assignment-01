#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers (a): ";
    cin >> a;
    cout << "Enter two numbers (b): ";
	cin>>b;
    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swap: a = " << a << ", b = " << b << endl;

    return 0;
}
