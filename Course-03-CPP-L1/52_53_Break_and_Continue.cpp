#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [الدرس 52]: Break Statement
// الهدف: إيقاف الحلقة التكرارية فوراً عند تحقق شرط معين
// ==========================================================

void SearchWithBreak() {
    cout << "\n--- Lesson 52: Break Statement (Search Example) ---" << endl;

    // تعريف مصفوفة تحتوي على 10 عناصر كما في مثال الدرس
    int arr[10] = { 10, 20, 44, 55, 33, 22, 99, 88, 99, 100 };
    int SearchFor = 20;

    for (int i = 0; i < 10; i++) {
        cout << "Checking iteration " << i + 1 << "..." << endl;

        if (arr[i] == SearchFor) {
            cout << "\nSuccess! " << SearchFor << " found at position (index) " << i << endl;

            // نستخدم break هنا لأننا وجدنا الرقم ولا داعي لإكمال بقية الدورات
            break;
        }
    }
}

// ==========================================================
// [الدرس 53]: Continue Statement
// الهدف: تخطي الدورة الحالية فقط وإكمال الدورة التي تليها
// ==========================================================

void SumWithContinue() {
    cout << "\n--- Lesson 53: Continue Statement (Sum Numbers < 50) ---" << endl;

    int sum = 0;
    int number = 0;

    // مثال الدرس: قراءة 5 أرقام وجمعها بشرط أن تكون أقل من 50
    for (int i = 1; i <= 5; i++) {
        cout << "Enter a number (" << i << "/5): ";
        cin >> number;

        if (number > 50) {
            cout << "Invalid: Number > 50 will be skipped." << endl;

            // نستخدم continue لتخطي سطر الجمع بالأسفل والقفز للدورة التالية فوراً
            continue;
        }

        sum += number;
    }

    cout << "\nFinal Result: The total sum is: " << sum << endl;
}

// ==========================================================
// Main Function
// ==========================================================

int main() {

    // 1. تشغيل مثال الـ Break
    SearchWithBreak();

    cout << "\n-----------------------------------------------" << endl;

    // 2. تشغيل مثال الـ Continue
    SumWithContinue();

    return 0;
}
