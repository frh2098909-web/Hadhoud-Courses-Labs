#include <iostream>
#include <string>

using namespace std;

// --- Problem #06: Check Full Name ---
struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter First Name: "; cin >> Info.FirstName;
    cout << "Enter Last Name: ";  cin >> Info.LastName;
    return Info;
}

string GetFullName(stInfo Info) {
    return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName) {
    cout << "Full Name: " << FullName << endl << "---" << endl;
}

// --- Problem #07: Half Number ---
int ReadNumber()
{
    int Num;
    cout << "Enter a number: "; cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num) 
{
    return (float)Num / 2;
}

void PrintHalfResult(int Num) 
{
    cout << "Half of " << Num << " is " << CalculateHalfNumber(Num) << endl << "---" << endl;
}

// --- Problem #08: Pass or Fail ---
enum enPassFail { Pass = 1, Fail = 2 };

enPassFail CheckMark(int Mark) 
{
    return (Mark >= 50) ? enPassFail::Pass : enPassFail::Fail;
}

void PrintPassFailResult(int Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "Result: Passed" << endl << "---" << endl;
    else
        cout << "Result: Failed" << endl << "---" << endl;
}

// --- Problem #09: Sum of 3 Numbers ---
void Read3Numbers(int& N1, int& N2, int& N3)
{
    cout << "Enter 3 Numbers to sum:" << endl;
    cin >> N1 >> N2 >> N3;
}

int SumOf3Numbers(int N1, int N2, int N3)
{
    return N1 + N2 + N3;
}

// --- Problem #10: Average of 3 Marks ---
float CalculateAverage(int N1, int N2, int N3)
{
    return (float)SumOf3Numbers(N1, N2, N3) / 3;
}

int main()
{
    // Execution for Problem 06
    PrintFullName(GetFullName(ReadInfo()));

    // Execution for Problem 07
    PrintHalfResult(ReadNumber());

    // Execution for Problem 08
    int Mark;
    cout << "Enter Mark for Pass/Fail Check: "; cin >> Mark;
    PrintPassFailResult(Mark);

    // Execution for Problems 09 & 10
    int N1, N2, N3;
    Read3Numbers(N1, N2, N3);
    cout << "Total Sum (Problem 09): " << SumOf3Numbers(N1, N2, N3) << endl;
    cout << "Average (Problem 10): " << CalculateAverage(N1, N2, N3) << endl;

    return 0;
}
