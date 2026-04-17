#include <iostream>
#include <string>

using namespace std;

// تعريف الهيكل (Structure) لتخزين بيانات الشخص
struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

// [دالة مساعدة]: لقراءة بيانات شخص واحد فقط
void ReadInfo(strInfo& Info)
{
    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
}

// [دالة مساعدة]: لطباعة بيانات شخص واحد فقط
void PrintInfo(strInfo Info)
{
    cout << "\n******************************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName : " << Info.LastName << endl;
    cout << "Age      : " << Info.Age << " Years." << endl;
    cout << "Phone    : " << Info.Phone << endl;
    cout << "******************************************\n";
}

// [الدرس 41]: دالة تتعامل مع مصفوفة كاملة (تمرير المصفوفة للدالة)
void ReadPersonsInfo(strInfo Persons[2])
{
    // إعادة استخدام دالة القراءة لكل عنصر في المصفوفة
    ReadInfo(Persons[0]);
    ReadInfo(Persons[1]);
}

// [الدرس 41]: دالة لطباعة المصفوفة كاملة
void PrintPersonsInfo(strInfo Persons[2])
{
    PrintInfo(Persons[0]);
    PrintInfo(Persons[1]);
}

int main()
{
    // [الدرس 40]: تعريف مصفوفة من الهياكل (مجموعة أشخاص)
    strInfo Persons[2];

    // استدعاء الدوال لإدارة بيانات المصفوفة
    ReadPersonsInfo(Persons);
    PrintPersonsInfo(Persons);

    return 0;
}
