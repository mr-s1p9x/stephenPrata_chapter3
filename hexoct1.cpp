#include <iostream>
using namespace std;

// Показывает шестнадцатеричные и восьмеричные константы

int main()
{
    int chest = 42; // Десятичная целочисленная константа
    int waist = 0x42; // Шестнадцатеричная целочисленная константа
    int inseam = 042; // Восьмеричная целочисленная константа

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << endl;
    cout << "waist = " << waist << endl;
    cout << "inseam = " << inseam << endl;

    cout << "------------------------------" << endl;
    // отображает значения в шестнадцатеричном и восьмеричном формате
    int chest_2 = 42;
    int waist_2 = 42;
    int inseam_2 = 42;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest_2 << " (decimal)" << endl;
    cout << hex; // манипулятор для изменения основания системы счисления
    cout << "waist = " << waist_2 << " hexadecimal" << endl;
    cout << oct; // манипулятор для изменения основания системы счисления
    cout << "inseam = " << inseam_2 << " (octal)" << endl;


    return 0;
}