#include <iostream>
#include <string>

using namespace std;

// --- Problem #6: Struct & Functions (Full Name) ---
struct stFullName {
    string FirstName;
    string LastName;
};

stFullName ReadFullName() {
    stFullName Name;
    cout << "Please enter your First Name? " << endl;
    cin >> Name.FirstName;
    cout << "Please enter your Last Name? " << endl;
    cin >> Name.LastName;
    return Name;
}

string GetFullName(stFullName Name) {
    return Name.FirstName + " " + Name.LastName;
}

void PrintFullName(string FullName) {
    cout << "\nYour Full Name is: " << FullName << endl;
}

// --- Problem #7: Functions (Half Number) ---
int ReadNumber() {
    int Num;
    cout << "Please enter a number? " << endl;
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num) {
    return (float)Num / 2;
}

void PrintHalfNumber(int Num) {
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << "\n" << Result << endl;
}

int main() {
    // حل المشكلة رقم 6
    PrintFullName(GetFullName(ReadFullName()));

    cout << "\n----------------------------\n";

    // حل المشكلة رقم 7
    int Number = ReadNumber();
    PrintHalfNumber(Number);

    return 0;
}
