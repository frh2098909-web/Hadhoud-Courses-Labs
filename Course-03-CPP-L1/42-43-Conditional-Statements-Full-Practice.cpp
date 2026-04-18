#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [الدرس 42]: الجمل الشرطية البسيطة (If .. Else)
// ==========================================================

// مسألة 4: توظيف سائق
void CheckHireDriver() {
    int Age;
    bool HasDriverLicense;
    cout << "\n--- Problem #4: Hire a Driver ---" << endl;
    cout << "Please enter Age: "; cin >> Age;
    cout << "Do you have a license? (1:Yes, 0:No): "; cin >> HasDriverLicense;

    if (Age > 21 && HasDriverLicense) cout << "Result: Hired" << endl;
    else cout << "Result: Rejected" << endl;
}

// مسألة 8: ناجح أم راسب
void CheckPassFail() {
    float Mark;
    cout << "\n--- Problem #8: Pass/Fail ---" << endl;
    cout << "Enter Mark: "; cin >> Mark;

    if (Mark >= 50) cout << "Result: PASS" << endl;
    else cout << "Result: FAIL" << endl;
}

// مسألة 11: متوسط ثلاث علامات (ناجح/راسب)
void CheckAveragePassFail() {
    float Mark1, Mark2, Mark3;
    cout << "\n--- Problem #11: Average Pass/Fail ---" << endl;
    cout << "Enter 3 Marks: "; cin >> Mark1 >> Mark2 >> Mark3;

    float Avg = (Mark1 + Mark2 + Mark3) / 3;
    cout << "Average is: " << Avg << " -> ";

    if (Avg >= 50) cout << "Result: PASS" << endl;
    else cout << "Result: FAIL" << endl;
}

// مسألة 24: التحقق من نطاق العمر (18-45)
void ValidateAgeRange() {
    int Age;
    cout << "\n--- Problem #24: Validate Age ---" << endl;
    cout << "Enter Age: "; cin >> Age;

    if (Age >= 18 && Age <= 45) cout << "Result: Valid Age" << endl;
    else cout << "Result: Invalid Age" << endl;
}

// مسألة 49: الرقم السري للـ ATM
void CheckATMPin() {
    string PIN;
    cout << "\n--- Problem #49: ATM PIN ---" << endl;
    cout << "Enter PIN: "; cin >> PIN;

    if (PIN == "1234") cout << "Your Balance is: 7500" << endl;
    else cout << "Wrong PIN" << endl;
}

// ==========================================================
// [الدرس 43]: الجمل الشرطية المتعددة (Else IF)
// ==========================================================

// مسألة 33: تقدير العلامات (A, B, C...)
void ShowGrade() {
    int Grade;
    cout << "\n--- Problem #33: Grade Level ---" << endl;
    cout << "Enter your Grade: "; cin >> Grade;

    if (Grade >= 90) cout << "Result: A" << endl;
    else if (Grade >= 80) cout << "Result: B" << endl;
    else if (Grade >= 70) cout << "Result: C" << endl;
    else if (Grade >= 60) cout << "Result: D" << endl;
    else if (Grade >= 50) cout << "Result: E" << endl;
    else cout << "Result: F" << endl;
}

// مسألة 34: حساب نسبة العمولة
void CalculateCommission() {
    float TotalSales;
    cout << "\n--- Problem #34: Commission Percentage ---" << endl;
    cout << "Enter Total Sales: "; cin >> TotalSales;

    float Percentage;
    if (TotalSales >= 1000000) Percentage = 0.01;
    else if (TotalSales >= 500000) Percentage = 0.02;
    else if (TotalSales >= 100000) Percentage = 0.03;
    else if (TotalSales >= 50000) Percentage = 0.05;
    else Percentage = 0.00;

    cout << "Commission Percentage: " << Percentage << endl;
    cout << "Total Commission: " << Percentage * TotalSales << endl;
}

// مسألة 36: آلة حاسبة بسيطة
void SimpleCalculator() {
    float Num1, Num2;
    char OpType;
    cout << "\n--- Problem #36: Simple Calculator ---" << endl;
    cout << "Enter Num1, Num2, and Operator (+,-,*,/): ";
    cin >> Num1 >> Num2 >> OpType;

    if (OpType == '+') cout << "Result: " << Num1 + Num2 << endl;
    else if (OpType == '-') cout << "Result: " << Num1 - Num2 << endl;
    else if (OpType == '*') cout << "Result: " << Num1 * Num2 << endl;
    else if (OpType == '/') cout << "Result: " << Num1 / Num2 << endl;
    else cout << "Wrong Operation!" << endl;
}

// مسألة 44: يوم الأسبوع
void PrintDayOfWeek() {
    int Day;
    cout << "\n--- Problem #44: Day of Week ---" << endl;
    cout << "Enter Day Number (1-7): "; cin >> Day;

    if (Day == 1) cout << "It's Sunday" << endl;
    else if (Day == 2) cout << "It's Monday" << endl;
    else if (Day == 3) cout << "It's Tuesday" << endl;
    else if (Day == 4) cout << "It's Wednesday" << endl;
    else if (Day == 5) cout << "It's Thursday" << endl;
    else if (Day == 6) cout << "It's Friday" << endl;
    else if (Day == 7) cout << "It's Saturday" << endl;
    else cout << "Wrong Day" << endl;
}

// مسألة 45: شهر السنة
void PrintMonthOfYear() {
    int Month;
    cout << "\n--- Problem #45: Month of Year ---" << endl;
    cout << "Enter Month Number (1-12): "; cin >> Month;

    if (Month == 1) cout << "January" << endl;
    else if (Month == 2) cout << "February" << endl;
    else if (Month == 3) cout << "March" << endl;
    else if (Month == 4) cout << "April" << endl;
    else if (Month == 5) cout << "May" << endl;
    else if (Month == 6) cout << "June" << endl;
    else if (Month == 7) cout << "July" << endl;
    else if (Month == 8) cout << "August" << endl;
    else if (Month == 9) cout << "September" << endl;
    else if (Month == 10) cout << "October" << endl;
    else if (Month == 11) cout << "November" << endl;
    else if (Month == 12) cout << "December" << endl;
    else cout << "Wrong Month" << endl;
}

int main() {
    // تشغيل مسائل الدرس 42
    CheckHireDriver();
    CheckPassFail();
    CheckAveragePassFail();
    ValidateAgeRange();
    CheckATMPin();

    cout << "\n------------------------------------------\n";

    // تشغيل مسائل الدرس 43
    ShowGrade();
    CalculateCommission();
    SimpleCalculator();
    PrintDayOfWeek();
    PrintMonthOfYear();

    return 0;
}
