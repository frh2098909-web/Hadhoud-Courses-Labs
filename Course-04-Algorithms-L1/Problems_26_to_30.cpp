#include <iostream>
#include <string>

using namespace std;

/**
 * Problems 26 to 30
 * 
 * ملاحظة: تم حل هذه المسائل باستخدام جميع جمل اللوب (While, Do..While, For) 
 * لترسيخ الفهم العميق وتطبيق ما تم شرحه في دروس الأستاذ محمد أبو هدهود.
 */

// ==========================================================
// الدوال المساعدة العامة (تستخدم لجميع المسائل)
// ==========================================================

int ReadNumber(string Message = "please enter a number?") 
{
    int Number;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enum enOddEven { Odd = 1, Even = 2 };

enOddEven CheckOddEven(int Number)
{
    if (Number % 2 != 0)
        return enOddEven::Odd;
    else
        return enOddEven::Even;
}

// ==========================================================
// Problem 26: Print Range from 1 to N
// ==========================================================

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int counter = 0;
    cout << "\nRange printed using while statement:\n";
    while (counter < N) {
        counter++;
        cout << counter << endl;
    }
}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int counter = 0;
    cout << "\nRange printed using Do..while statement:\n";
    do {
        counter++;
        cout << counter << endl;
    } while (counter < N);
}

void PrintRangeFrom1toN_UsingFor(int N)
{
    cout << "\nRange printed using for statement:\n";
    for (int counter = 1; counter <= N; counter++)
    {
        cout << counter << endl;
    }
}

// ==========================================================
// Problem 27: Print Range from N to 1
// ==========================================================

void PrintRangeFromNto1_UsingWhile(int N)
{
    int counter = N + 1;
    cout << "\nRange printed using while statement:\n";
    while (counter > 1) {
        counter--;
        cout << counter << endl;
    }
}

void PrintRangeFromNto1_UsingDoWhile(int N)
{
    int counter = N + 1;
    cout << "\nRange printed using Do..while statement:\n";
    do {
        counter--;
        cout << counter << endl;
    } while (counter > 1);
}

void PrintRangeFromNto1_UsingFor(int N)
{
    cout << "\nRange printed using for statement:\n";
    for (int counter = N; counter >= 1; counter--)
    {
        cout << counter << endl;
    }
}

// ==========================================================
// Problem 28: Sum Odd Numbers from 1 to N
// ==========================================================

int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int counter = 0, sum = 0;
    while (counter < N) {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Odd) sum += counter;
    }
    return sum;
}

int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int counter = 0, sum = 0;
    do {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Odd) sum += counter;
    } while (counter < N);
    return sum;
}

int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int sum = 0;
    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddEven(counter) == enOddEven::Odd) sum += counter;
    }
    return sum;
}

// ==========================================================
// Problem 29: Sum Even Numbers from 1 to N
// ==========================================================

int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
    int counter = 0, sum = 0;
    while (counter < N) {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Even) sum += counter;
    }
    return sum;
}

int SumEvenNumbersFrom1toN_UsingDoWhile(int N)
{
    int counter = 0, sum = 0;
    do {
        counter++;
        if (CheckOddEven(counter) == enOddEven::Even) sum += counter;
    } while (counter < N);
    return sum;
}

int SumEvenNumbersFrom1toN_UsingFor(int N)
{
    int sum = 0;
    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddEven(counter) == enOddEven::Even) sum += counter;
    }
    return sum;
}

// ==========================================================
// Problem 30: Factorial of N
// ==========================================================

int ReadPositiveNumber(string Message)
{
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int Factorial(int N)
{
    int F = 1;
    for (int counter = N; counter >= 1; counter--)
    {
        F = F * counter;
    }
    return F;
}

// ==========================================================
// دالة الاختبار الرئيسية
// ==========================================================

int main() 
{
    int N = ReadNumber("Please enter a number to start testing:");

    // --- الاختبارات ---
    cout << "\n--- Problem 26: 1 to N ---";
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);

    cout << "\n\n--- Problem 27: N to 1 ---";
    PrintRangeFromNto1_UsingWhile(N);
    PrintRangeFromNto1_UsingDoWhile(N);
    PrintRangeFromNto1_UsingFor(N);

    cout << "\n\n--- Problem 28: Sum Odd Numbers ---" << endl;
    cout << "Using While   : " << SumOddNumbersFrom1toN_UsingWhile(N) << endl;
    cout << "Using Do While: " << SumOddNumbersFrom1toN_UsingDoWhile(N) << endl;
    cout << "Using For     : " << SumOddNumbersFrom1toN_UsingFor(N) << endl;

    cout << "\n--- Problem 29: Sum Even Numbers ---" << endl;
    cout << "Using While   : " << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;
    cout << "Using Do While: " << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
    cout << "Using For     : " << SumEvenNumbersFrom1toN_UsingFor(N) << endl;

    cout << "\n--- Problem 30: Factorial ---" << endl;
    int FactNum = ReadPositiveNumber("Enter a positive number for factorial:");
    cout << "Factorial Result: " << Factorial(FactNum) << endl;

    return 0;
}
