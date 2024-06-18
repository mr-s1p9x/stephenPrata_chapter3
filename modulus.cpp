#include <iostream>
using namespace std;


int main()
{
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn; // целый стоун
    int pounds = lbs % Lbs_per_stn; // остаток в фунтах
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds(s)\n";

//    В выражении lbs 1 Lbs_per_stn оба операнда имеют тип int , поэтому компьютер
//    выполняет целочисленное деление. С учетом введенного значения (177), которое
//    было присвоено переменной lbs, результат выражения оказался равным 12.
//    Умножение 12 на 14 дает 168, поэтому остаток от деления 177 на 14 равен 9, и это
//    значение является значением lbs % Lbs_per_stn. Теперь вы теоретически, безо всяких
//    эмоций, будете готовы ответить на вопрос о собственном весе, когда будете путешествовать
//    по Великобритании.

    cout << "---------------------------------------------" << endl;
    // Еще пример из chatgpt
    const double pounds_per_stone = 14.0;
    const double kg_per_pound = 0.453592;

    double stones;
    cout << "Enter your weight in stones: ";
    cin >> stones;

    double pounds_s = stones * pounds_per_stone;
    double kilograms_s = pounds_s * kg_per_pound;

    cout << "Your weight in pounds: " << pounds_s << endl;
    cout << "Your weight in kilograms: " << kilograms_s << endl;

    return 0;
}