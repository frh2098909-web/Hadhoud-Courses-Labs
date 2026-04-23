#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [الدرس 48]: For Loop & Arrays
// ==========================================================

struct strInfo {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void ReadInfo(strInfo& Info) {
    cout << "Enter FirstName: "; cin >> Info.FirstName;
    cout << "Enter LastName: "; cin >> Info.LastName;
    cout << "Enter Age: "; cin >> Info.Age;
    cout << "Enter Phone: "; cin >> Info.Phone;
}

void PrintInfo(strInfo Info) {
    cout << "\nFirstName: " << Info.FirstName << " | LastName: " << Info.LastName;
    cout << "\nAge: " << Info.Age << " | Phone: " << Info.Phone;
    cout << "\n------------------------------------------";
}

void ReadPersonsArray(strInfo Persons[100], int& NumberOfPersons) {
    cout << "How many persons do you want to enter? ";
    cin >> NumberOfPersons;
    for (int i = 0; i < NumberOfPersons; i++) {
        cout << "\nPlease enter person's " << i + 1 << " Info:\n";
        ReadInfo(Persons[i]);
    }
}

void PrintPersonsArray(strInfo Persons[100], int NumberOfPersons) {
    cout << "\n--- Displaying Persons Information ---";
    for (int i = 0; i < NumberOfPersons; i++) {
        PrintInfo(Persons[i]);
    }
}

// ==========================================================
// [الدرس 49]: Nested For Loop (الأمثلة من 1 إلى 9)
// ==========================================================

void RunNestedLoopExamples() {
    
    // مثال 1: جدول الضرب
    cout << "\n\n[Example 1: Multiplication Table 1-10]\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << i << "*" << j << "=" << i * j << "\t";
        }
        cout << "\n**********************************" << endl;
    }

    // مثال 2: مربع النجوم
    cout << "\n[Example 2: Square Stars]\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) cout << "*";
        cout << "\n";
    }

    // مثال 3: مثلث نجوم متزايد
    cout << "\n[Example 3: Increasing Stars]\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    // مثال 4: مثلث نجوم متناقص
    cout << "\n[Example 4: Decreasing Stars]\n";
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    // مثال 5: توليد حروف AA, AB...
    cout << "\n[Example 5: Letters Generation]\n";
    for (int i = 65; i <= 70; i++) { // قللت المدى قليلاً للوضوح
        for (int j = 65; j <= 70; j++) cout << char(i) << char(j) << " ";
        cout << "\n";
    }

    // مثال 6: أرقام متناقصة
    cout << "\n[Example 6: Decreasing Numbers]\n";
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    // مثال 7: أرقام متزايدة
    cout << "\n[Example 7: Increasing Numbers]\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << "\n";
    }

    // مثال 8: مثلث حروف A-F
    cout << "\n[Example 8: Letters Triangle]\n";
    for (int i = 65; i <= 70; i++) {
        for (int j = 65; j <= i; j++) cout << char(j) << " ";
        cout << "\n";
    }

    // مثال 9: شبكة أرقام متغيرة البداية
    cout << "\n[Example 9: Number Grid Shift]\n";
    for (int i = 1; i <= 10; i++) {
        for (int j = i; j <= 10; j++) cout << j << " ";
        cout << "\n";
    }
}

// ==========================================================
// Main Function
// ==========================================================

int main() {
    // 1. تطبيق الدرس 48
    strInfo Persons[100];
    int NumberOfPersons = 0;
    ReadPersonsArray(Persons, NumberOfPersons);
    PrintPersonsArray(Persons, NumberOfPersons);

    cout << "\n==========================================" << endl;

    // 2. تطبيق الدرس 49
    RunNestedLoopExamples();

    return 0;
}
