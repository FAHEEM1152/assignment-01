#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int marks[5];
    string subjects[5] = {"Math", "Science", "English", "History", "Computer"};
    int total = 0;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    float percentage = total / 5.0;
    string grade;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";
    cout << "\n--- Report Card ---\n";
    cout << left << setw(15) << "Subject" << setw(10) << "Marks" << endl;
    for (int i = 0; i < 5; ++i)
        cout << left << setw(15) << subjects[i] << setw(10) << marks[i] << endl;
    cout << "\nTotal: " << total << "/500";
    cout << "\nPercentage: " << fixed << setprecision(2) << percentage << "%";
    cout << "\nGrade: " << grade;
    string result = (percentage >= 50) ? "Passed" : "Failed";
    cout << "\nResult: " << result << endl;

    return 0;
}

