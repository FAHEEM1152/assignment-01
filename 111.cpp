#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two floating point numbers: ";
    cin >> num1 >> num2;
    cout << fixed << setprecision(3);
    cout << "\n--- Operations on Floating Point Numbers ---" << endl;
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;

    if (num2 != 0)
        cout << "Quotient: " << num1 / num2 << endl;
    else
        cout << "Quotient: Division by zero error!" << endl;
    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);

    cout << "\n--- Operations on Integer Values (After Casting) ---" << endl;
    cout << "Sum: " << int1 + int2 << endl;
    cout << "Difference: " << int1 - int2 << endl;
    cout << "Product: " << int1 * int2 << endl;

    if (int2 != 0)
        cout << "Quotient: " << int1 / int2 << endl;
    else
        cout << "Quotient: Division by zero error!" << endl;

    return 0;
}

