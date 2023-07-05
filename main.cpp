#include <iostream>
#include "lib.h"
#include <windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const char* str1 = "Hello";
    const char* str2 = "Hello";
    int result = mystrcmp(str1, str2);
    if (result == 0) {
        cout << "Рядки рівні" << endl;
    }
    else if (result == 1) {
        cout << "Перший рядок більший за другий" << endl;
    }
    else {
        cout << "Перший рядок менший за другий" << endl;
    }

    char str3[] = "12345";
    int number = StringToNumber(str3);
    cout << "Число: " << number << endl;

    int num = 9876;
    char* str4 = NumberToString(num);
    cout << "Рядок: " << str4 << endl;
    delete[] str4; 

    char str5[] = "hello";
    char* uppercaseStr = Uppercase(str5);
    cout << "Рядок у верхньому регістрі: " << uppercaseStr << endl;
    delete[] uppercaseStr;
    
    char str6[] = "WORLD";
    char* lowercaseStr = Lowercase(str6);
    cout << "Рядок у нижньому регістрі: " << lowercaseStr << endl;
    delete[] lowercaseStr; 

    char str7[] = "Hello";
    char* reversedStr = mystrrev(str7);
    cout << "Реверсований рядок: " << reversedStr << endl;

    const char* str8 = "Hello, World!";
    int length = mystrlen(str8);
    cout << "Довжина рядка: " << length << endl;

    char str9[20];
    const char* sourceStr = "Copy me!";
    char* copiedStr = mystrcpy(str9, sourceStr);
    cout << "Скопійований рядок: " << copiedStr << endl;

    char str10[20] = "Hello, ";
    const char* appendStr = "World!";
    char* concatenatedStr = mystrcat(str10, appendStr);
    cout << "Рядок після приєднання: " << concatenatedStr << endl;

    char str11[] = "Hello, World!";
    char searchChar = 'W';
    char* foundChar = mystrchr(str11, searchChar);
    if (foundChar != nullptr) {
        cout << "Символ '" << searchChar << "' знайдено: " << foundChar << endl;
    }
    else {
        cout << "Символ '" << searchChar << "' не знайдено." << endl;
    }

    char str12[] = "Hello, World!";
    char substring[] = "World";
    char* foundSubstring = mystrstr(str12, substring);
    if (foundSubstring != nullptr) {
        cout << "Підрядок '" << substring << "' знайдено: " << foundSubstring << endl;
    }
    else {
        cout << "Підрядок '" << substring << "' не знайдено." << endl;
    }

    return 0;
}
