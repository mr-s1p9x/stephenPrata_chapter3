#include <iostream>
#define ZERO 0 // создает символ ZERO для значения 0
#include <climits>
using namespace std;

int main()
{
    // В данном случае переменная sam типа short имеет макс. значение в нашей системе 32767
    short sam = SHRT_MAX; // инициализирует переменную по максимальному значению
    // А переменной sue типа unsigned short присваивается также максимальное значение 32767
    unsigned short sue = sam; // инициализация действительна, если переменная sam уже была определена
    // В отображении у обоих по 32768 $ на счету
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;

    // Затем мы прибавляем по 1 $ к каждой переменной
    cout << "Add $1 to each account" << endl;
    sam = sam + 1; // А переменная sam вместо 32368 получает значение -32768!
    sue = sue + 1; // с переменной sue проходит все гладко, поскольку новое значение
    // меньше макс. значения для целочисленного беззнакового типа
    cout << "Now Sam has " << sam << " and Sue has " << sue << " dollars deposited\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " and Sue has " << sue << " dollars deposited" << endl;

    // Также и при вычитании 1 от нуля для переменной sam все пройдет гладко, а вот беззнаковая
    // переменная sue получит значение 65535
    cout << "Take $1 from each account " << endl;
    sam = -1; // -1
    sue = -1; // 65535
    cout << "Now Sam has " << sam << " and Sue has " << sue << " dollars deposited" << endl;
    cout << "Lucky Sue!" << endl;

    // Если предельное значение будет превышено, то отсчет начнется с противоположного конца диапазона
}