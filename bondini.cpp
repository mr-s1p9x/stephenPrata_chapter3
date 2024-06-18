#include <iostream>
using namespace std;

// использование управляющих последовательностей

int main()
{
    cout << "\aOperation \"HyperHype\" is now activated!\n";
    cout << "Enter your agent code:___________\b\b\b\b\b\b\b\b";

    long code;
    cin >> code;

    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";

    // Примеры с символами ISO
    int k\u00F6rper;
    cout << "Let them eat g\u00E2teau.\n";

    return 0;
}