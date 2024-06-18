#include <iostream>
using namespace std;

int main()
{
    int auks, bats, coots;
    // следующий оператор суммирует значения, имеющие тип double,
    // полученный результат преобразуется в тип int
    auks = 19.99 + 11.99;

    // эти операторы суммируют целочисленные значения
    bats = (int) 19.99 + (int) 11.99; // Старый синтаксис С
    coots = int (19.99) + int (11.99); // Новый синтаксис С++

    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is "; // вывод в формате char
    cout << int(ch) << endl;

    //
    char grade = 65;
    char grade_2 = 'A';

    cout << "A: " << grade << endl;

    char ee = 88;
    cout << "??: " << ee << endl;

    cout << 8 * 9 + 2 << endl;
    cout << 6 * 3 / 4 << endl;
    cout << 3 / 4 * 6 << endl;
    cout << 6.0 * 3 / 4 << endl;
    cout << 15 % 4 << endl;

    return 0;
}