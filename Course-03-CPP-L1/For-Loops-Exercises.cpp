#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [الدرس 47]: حلقات اللوب For Loop
// ==========================================================

void RunLoopExercises() {
    cout << "\n--- Lesson 47: For Loop Exercises ---" << endl;
    
    int N;
    cout << "Enter a number (N): ";
    cin >> N;

    // 1. طباعة الأرقام من 1 إلى N
    cout << "Numbers 1 to " << N << ": ";
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. مجموع الأرقام الفردية والزوجية
    int SumOdd = 0, SumEven = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 != 0) 
            SumOdd += i;
        else 
            SumEven += i;
    }
    cout << "Sum of Odds: " << SumOdd << " | Sum of Evens: " << SumEven << endl;

    // 3. حساب المضروب (Factorial)
    long long Fact = 1;
    for (int i = N; i >= 1; i--) {
        Fact *= i;
    }
    cout << "Factorial of " << N << " is: " << Fact << endl;

    // 4. طباعة الحروف من A إلى Z باستخدام ASCII
    cout << "Letters A to Z: ";
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << " ";
    }
    cout << endl;
}

int main() {
    // استدعاء تمارين اللوب
    RunLoopExercises();

    return 0;
}
