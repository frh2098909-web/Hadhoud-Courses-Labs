// Lessons 30 & 31: Data Type Conversion & String Operations

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // --- مثال 1: التحويل بين الأنواع الرقمية (Implicit & Explicit) ---
    cout << "--- Example 1: Numeric Conversions ---" << endl;
    int Num1;
    double Num2 = 18.99;
    
    Num1 = Num2; // implicit conversion (تحويل ضمني)
    cout << "Implicit (double to int): " << Num1 << endl;

    Num1 = (int)Num2; // explicit conversion (C-style)
    Num1 = int(Num2); // explicit conversion (Functional)
    cout << "Explicit (double to int): " << Num1 << "\n\n";


    // --- مثال 2: تحويل النصوص إلى أرقام (string to Numeric) ---
    cout << "--- Example 2: String to Numeric ---" << endl;
    string str = "123.456";
    int num_int = stoi(str);      // string to integer
    float num_float = stof(str);  // string to float
    double num_double = stod(str);// string to double

    cout << "num_int = " << num_int << endl;
    cout << "num_float = " << num_float << endl;
    cout << "num_double = " << num_double << "\n\n";


    // --- مثال 3: تحويل الأرقام إلى نصوص (Numeric to string) ---
    cout << "--- Example 3: Numeric to String ---" << endl;
    int N1 = 123;
    double N2 = 18.99;
    string st1 = to_string(N1);
    string st2 = to_string(N2);
    cout << "String 1: " << st1 << endl;
    cout << "String 2: " << st2 << "\n\n";


    // --- مثال 4: خصائص النصوص والدمج (String Properties) ---
    cout << "--- Example 4: String Properties ---" << endl;
    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Length of MyString: " << MyString.length() << endl;
    cout << "Character at index 2: " << MyString[2] << endl; // C

    string S1 = "10", S2 = "20";
    string S3 = S1 + S2; // Concatenation
    cout << "Concatenation (S1 + S2): " << S3 << endl;
    cout << "Sum using stoi: " << stoi(S1) + stoi(S2) << "\n\n";


    // --- الواجب: تطبيق شامل مع المدخلات ---
    cout << "--- Final Project (Homework) ---" << endl;
    // تنبيه: عند استخدام cin قبل getline قد تحدث مشاكل، لكن هنا بدأنا بـ getline وهو الأصح.
    string String1, String2, String3;

    cout << "Please enter String1 (Full sentence): " << endl;
    // ملاحظة: إذا قمتِ بتجربة هذا الجزء، تأكدي من إدخال السلسلة الأولى أولاً
    getline(cin >> ws, String1); // ws تستخدم لتنظيف الـ buffer من أي مسافات سابقة

    cout << "Please enter String2 (Number): " << endl;
    cin >> String2;

    cout << "Please enter String3 (Number): " << endl;
    cin >> String3;

    cout << "\n******************************************\n";
    cout << "The length of string1 is " << String1.length() << endl;
    cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;

    int Result = stoi(String2) * stoi(String3);
    cout << String2 << " * " << String3 << " = " << Result << endl;

    return 0;
}
