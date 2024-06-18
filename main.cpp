#include <iostream>
#include <climits>
using namespace std;


int main() {
    // некоторые ограничения целых чисел
    int n_int = INT_MAX; // инициализация, или присваивание переменной n_int макс. значения int
    short n_short = SHRT_MAX; // символы, определенные в файле limits.h
    long n_long = LONG_MAX;

    // Операция sizeof выдает размер типа или переменной
    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof(n_short) << " bytes." << endl;
    cout << "long is " << sizeof(n_long) << " bytes." << endl << endl;
    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;


    return 0;
}
