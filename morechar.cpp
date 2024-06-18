#include <iostream>
using namespace std;

// Сравнение типов char и int

int main()
{
    char ch = 'M'; // присваивает переменной ch код ASKII символа М
    int i = ch; // сохраняет этот же код в int

    cout << "The ASKII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code: " << endl;

    ch = ch + 1; // изменяет код символа в переменной ch
    i = ch; // сохраняет код нового символа в переменной i

    cout << "The ASCII code for " << ch << " is " << i << endl;

    // Использование члена функции cout.put() для отображения символа
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);

    // Использование cout.put() для отображения символьной константы
    cout.put('!');
    cout << endl << "Done" << endl;

    // Пример экранирования
    char alarm = '\a';
    cout << alarm << "Don't do that again!\a\n";
    cout << "Ben \"Buggsie\" Hacker\nwas here!\n";


    return 0;
}