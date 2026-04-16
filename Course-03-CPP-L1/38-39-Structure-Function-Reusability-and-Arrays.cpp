#include <iostream>
#include <string>

using namespace std;

// ==========================================================
// [Lesson 38]: Structures and Functions (Reusability)
// ==========================================================

struct strInfo
{
    string Name;
    int Age;
    string City;
    string Country;
    float MonthlySalary;
    char Gender;
    bool isMarried;
};

// استخدام & لتعديل البيانات الأصلية في الذاكرة (Pass by Reference)
void ReadInfo(strInfo &Info)
{
    cout << "please enter your Name ?" << endl;
    //  استخدام getline مع ws لقراءة الاسم كاملاً مع المسافات
    getline(cin >> ws, Info.Name); 

    cout << "please enter your Age?" << endl;
    cin >> Info.Age;

    cout << "please enter your Country ?" << endl;
    cin >> Info.Country;

    cout << "please enter your City ?" << endl;
    cin >> Info.City;

    cout << "please enter your MonthlySalary ?" << endl;
    cin >> Info.MonthlySalary;

    cout << "please enter your Gender?" << endl;
    cin >> Info.Gender;

    cout << "please enter your isMarried (1 for Yes, 0 for No)?" << endl;
    cin >> Info.isMarried;
}

void PrintInfo(strInfo Info)
{
    cout << "\n*******************************" << endl;
    cout << "Name: " << Info.Name << endl;
    cout << "Age: " << Info.Age << " Years." << endl;
    cout << "City: " << Info.City << endl;
    cout << "Country: " << Info.Country << endl;
    cout << "Monthly Salary: " << Info.MonthlySalary << endl;
    cout << "Yearly Salary: " << Info.MonthlySalary * 12 << endl;
    cout << "Gender: " << Info.Gender << endl;
    cout << "Married: " << Info.isMarried << endl;
    cout << "*******************************" << endl;
}

// ==========================================================
// Main Function: Combining Examples
// ==========================================================

int main()
{
    // --- تطبيق درس 38 ---
    cout << "===== [Lesson 38 Examples] =====" << endl;
    strInfo person1Info;
    ReadInfo(person1Info);
    PrintInfo(person1Info);

    cout << "\n\n";

    // --- تطبيق درس 39 (1): مصفوفة الأحرف ---
    cout << "===== [Lesson 39: String as Array] =====" << endl;
    string x_name = "Mohammed Abu-Hadhoud";

    cout << "x[0]: " << x_name[0] << endl; // Prints M
    cout << "x[2]: " << x_name[2] << endl; // Prints h
    cout << "x[7]: " << x_name[7] << endl; // Prints d

    cout << "\n";

    // --- تطبيق درس 39 (2): مصفوفة الأرقام الصحيحة ---
    cout << "===== [Lesson 39: Array of Integers] =====" << endl;
    int x_numbers[5] = { 22, 18, 2, 55, 520 };

    cout << "x[0]: " << x_numbers[0] << endl; // Prints 22
    cout << "x[1]: " << x_numbers[1] << endl; // Prints 18
    cout << "x[2]: " << x_numbers[2] << endl; // Prints 2
    cout << "x[3]: " << x_numbers[3] << endl; // Prints 55
    cout << "x[4]: " << x_numbers[4] << endl; // Prints 520

    return 0;
}
