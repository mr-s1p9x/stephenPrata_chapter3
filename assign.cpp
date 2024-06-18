#include <iostream>
using namespace std;

// изменение типа при присваивании

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3; // тип int преобразован в тип float
    int guess = 3.9832; // тип float преобразован в тип int
    int debt = 1.6E4; // результат не определен в С++
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;

    return 0;
}