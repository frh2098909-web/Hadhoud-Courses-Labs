#include <iostream>
#include <string>

using namespace std;

// --- Structures ---
struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};

// --- Problem #1: Procedure ---
void PrintMyName()
{
    cout << "\nYour Name is: Farah" << endl;
}

// --- Problem #2: Function & Procedure ---
string ReadName() 
{
    string Name;
    cout << "Please enter your name? " << endl;
    getline(cin >> ws, Name);
    return Name;
}

void PrintName(string Name)
{
    cout << "\nYour Name is: " << Name << endl;
}

// --- Problem #3: Enum & Functions ---
enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber() 
{
    int Num;
    cout << "Please enter a number? " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(int Num) 
{
    if (Num % 2 == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumberType(enNumberType NumberType) 
{
    if (NumberType == enNumberType::Even)
        cout << "\nNumber is Even." << endl;
    else
        cout << "\nNumber is Odd." << endl;
}

// --- Problems #4 & #5: Struct & Logic ---
stInfo ReadInfo() 
{
    stInfo Info;
    cout << "Please enter your Age? " << endl;
    cin >> Info.Age;
    cout << "Do you have driver license (0/1)? " << endl;
    cin >> Info.HasDrivingLicense;
    cout << "Do you have recommendation (0/1)? " << endl;
    cin >> Info.HasRecommendation;
    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\nHired" << endl;
    else
        cout << "\nRejected" << endl;
}

// --- Main Program ---
int main()
{
    
    // Problem #1
    PrintMyName(); 

    cout << "----------------------------" << endl;

    // Problem #2
    PrintName(ReadName());

    cout << "----------------------------" << endl;

    // Problem #3
    PrintNumberType(CheckNumberType(ReadNumber()));

    cout << "----------------------------" << endl;

    // Problem #4 & #5
    PrintResult(ReadInfo());

    return 0;
}
