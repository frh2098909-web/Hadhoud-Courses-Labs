#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// ========================================================
// Problem 21: Circle Area Along the Circumference
// ========================================================
float ReadCircumference() {
    float L;
    cout << "Please enter circumference L: " << endl;
    cin >> L;
    return L;
}

float CircleAreaByCircumference(float L) {
    const float PI = 3.141592653589793238;
    float Area = pow(L, 2) / (4 * PI);
    return Area;
}

void PrintResult21(float Area) {
    cout << "\n  Circle Area (P21) = " << Area << endl;
}

/*
int main() {
    PrintResult21(CircleAreaByCircumference(ReadCircumference()));
    return 0;
}
*/

// ========================================================
// Problem 22: Circle Area Inscribed in an Isosceles Triangle
// ========================================================
void ReadTriangleData22(float& A, float& B) {
    cout << "Please enter triangle side A: " << endl;
    cin >> A;
    cout << "Please enter triangle base B: " << endl;
    cin >> B;
}

float CircleAreaByITriangle(float A, float B) {
    const float PI = 3.141592653589793238;
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintResult22(float Area) {
    cout << "\n  Circle Area (P22) = " << Area << endl;
}

/*
int main() {
    float A, B;
    ReadTriangleData22(A, B);
    PrintResult22(CircleAreaByITriangle(A, B));
    return 0;
}
*/

// ========================================================
// Problem 23: Circle Area Described Around an Arbitrary Triangle
// ========================================================
void ReadTriangleData23(float& A, float& B, float& C) {
    cout << "Please enter triangle side A: " << endl;
    cin >> A;
    cout << "Please enter triangle side B: " << endl;
    cin >> B;
    cout << "Please enter triangle side C: " << endl;
    cin >> C;
}

float CircleAreaByATriangle(float A, float B, float C) {
    const float PI = 3.141592653589793238;
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = PI * pow(T, 2);
    return Area;
}

void PrintResult23(float Area) {
    cout << "\n  Circle Area (P23) = " << Area << endl;
}

/*
int main() {
    float A, B, C;
    ReadTriangleData23(A, B, C);
    PrintResult23(CircleAreaByATriangle(A, B, C));
    return 0;
}
*/

// ========================================================
// Problem 24: Validate Age (Between 18 and 45)
// ========================================================
int ReadAge() {
    int Age;
    cout << "Please enter your age: " << endl;
    cin >> Age;
    return Age;
}

bool CheckAge(int Age) {
    return (Age >= 18 && Age <= 45);
}

void PrintResult24(int Age) {
    if (CheckAge(Age))
        cout << Age << " is a Valid Age" << endl;
    else
        cout << Age << " is an Invalid Age" << endl;
}

/*
int main() {
    PrintResult24(ReadAge());
    return 0;
}
*/

// ========================================================
// Problem 25: Validate Age (Wait until Valid Age is entered)
// ========================================================
int ReadAgeUntilValid() {
    int Age;
    do {
        cout << "Please enter a valid age between 18 and 45: " << endl;
        cin >> Age;
    } while (Age < 18 || Age > 45);
    return Age;
}

void PrintResult25(int Age) {
    cout << "\n  Your age " << Age << " is now Valid!" << endl;
}

/*
int main() {
    PrintResult25(ReadAgeUntilValid());
    return 0;
}
*/
