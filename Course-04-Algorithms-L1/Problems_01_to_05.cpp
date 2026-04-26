#include <iostream>
#include <string>

using namespace std;

// Problem #1: Write a program to print your name on screen.
// Problem #2: Write a program to ask user to enter his/her name and print it on screen.

// --- Functions for Problem #1 ---
void PrintMyName(string Name) 
{
    cout << "\nYour Name is: " << Name << endl;
}

// --- Functions for Problem #2 ---
string ReadName() 
{
    string Name;
    cout << "Please enter your name? " << endl;
    getline(cin, Name);
    return Name;
}

void PrintEnteredName(string Name) 
{
    cout << "\nYour Name is: " << Name << endl;
}

int main() 
{
    // Solving Problem #1: Printing a fixed name
    PrintMyName("Farah");

    cout << "\n----------------------------\n";

    // Solving Problem #2: Reading from user and printing
    PrintEnteredName(ReadName());

    return 0;
}
