#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

// --- Problem #16: Rectangle Area Through Diagonal and Side ---
void ReadRectangleData(float& A, float& D) {
    cout << "Problem #16: Enter Rectangle Side A: "; cin >> A;
    cout << "Problem #16: Enter Rectangle Diagonal D: "; cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A, float D) {
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

// --- Problem #17: Triangle Area ---
void ReadTriangleData(float& A, float& H) {
    cout << "Problem #17: Enter Triangle Base A: "; cin >> A;
    cout << "Problem #17: Enter Triangle Height H: "; cin >> H;
}

float TriangleArea(float A, float H) {
    return (A / 2) * H;
}

// --- Problem #18: Circle Area ---
float ReadRadius() {
    float R;
    cout << "Problem #18: Enter Radius R: "; cin >> R;
    return R;
}

float CircleArea(float R) {
    const float PI = 3.141592653589793238;
    return pow(R, 2) * PI;
}

// --- Problem #19: Circle Area Through Diameter ---
float ReadDiameter() {
    float D;
    cout << "Problem #19: Enter Diameter D: "; cin >> D;
    return D;
}

float CircleAreaByDiameter(float D) {
    const float PI = 3.141592653589793238;
    return (pow(D, 2) * PI) / 4;
}

// --- Problem #20: Circle Area Inscribed in a Square ---
float ReadSquareSide() {
    float A;
    cout << "Problem #20: Enter Square Side A: "; cin >> A;
    return A;
}

float CircleAreaInscribedInSquare(float A) {
    const float PI = 3.141592653589793238;
    return (PI * pow(A, 2)) / 4;
}

void PrintResult(string Message, float Area) {
    cout << Message << " = " << Area << endl;
    cout << "-----------------------------------------" << endl;
}

int main() {
    // Execution #16
    float SideA, DiagonalD;
    ReadRectangleData(SideA, DiagonalD);
    PrintResult("Rectangle Area (Problem 16)", RectangleAreaBySideAndDiagonal(SideA, DiagonalD));

    // Execution #17
    float Base, Height;
    ReadTriangleData(Base, Height);
    PrintResult("Triangle Area (Problem 17)", TriangleArea(Base, Height));

    // Execution #18
    PrintResult("Circle Area (Problem 18)", CircleArea(ReadRadius()));

    // Execution #19
    PrintResult("Circle Area (Problem 19)", CircleAreaByDiameter(ReadDiameter()));

    // Execution #20
    PrintResult("Circle Area (Problem 20)", CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}
