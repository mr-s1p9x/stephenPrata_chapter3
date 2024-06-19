#include <iostream>
using namespace std;

int main()
{
    //1. Напишите короткую программу, которая выдавала бы запрос на ввод роста в
    //целых дюймах и преобразовывала бы их в футы и дюймы. Программа должна
    //использовать символ подчеркивания для обозначения позиции, с которой начинается
    //ввод значений. Используйте также символьную константу const для
    //представления коэффициента преобразования.
//    int heightInInches;
//
//    cout << "Enter your height in inches: _____\b\b\b\b\b";
//    cin >> heightInInches;
//
//    const int inchesPerFoot = 12; // Константа для преобразования дюймов в футы
//    int feet = heightInInches / inchesPerFoot; // Вычисление количества футов
//    int remainingInches = heightInInches % inchesPerFoot; // Вычисление оставшихся дюймов
//
//    cout << "Your height is " << feet << " feet and " << remainingInches << " inches." << endl;

// -------------------------------------------------------------------------------------------------------------------

    //2.Напишите короткую программу, которая выдавала бы запрос на ввод значения
    //роста в футах и дюймах и веса в фунтах. (Для хранения этой информации используйте
    //три переменных.)
    // Программа должна выдать индекс массы тела
    //(BMI, body mass index).
    // Чтобы рассчитать индекс, сначала преобразуйте высоту
    //в футах и дюймах в высоту в дюймах (1 фут = 12 дюймов).
    // Затем преобразуйте вес в фунтах в массу в килограммах, разделив на 2.2.
    // После этого рассчитайте свой индекс, разделив массу в килограммах на квадрат вашего роста в метрах.
    //Используйте символьные константы для представления различных коэффициентов
    //преобразования.

//    int heightInFeet, heightInInches, weightInPounds;
//
//    cout << "Enter your height in feet: ";
//    cin >> heightInFeet;
//    cout << "Enter your height in inches: ";
//    cin >> heightInInches;
//    cout << "Enter your weight in pounds: ";
//    cin >> weightInPounds;
//
//    // Константы для преобразования
//    const double inchesPerFoot = 12.0;
//    const double metersPerInch = 0.0254;
//    const double kgPerPound = 0.453592;
//
//    // Преобразование высоты в дюймах
//    double totalHeightInInches = heightInFeet * inchesPerFoot + heightInInches;
//
//    // Преобразование высоты в метрах
//    double heightInMeters = totalHeightInInches * metersPerInch;
//
//    // Преобразование веса в килограммы
//    double weightInKg = weightInPounds * kgPerPound;
//
//    // Расчет индекса массы тела (BMI)
//    double bmi = weightInKg / (heightInMeters * heightInMeters);
//
//    cout << "Your BMI is: " << bmi << endl;

// -------------------------------------------------------------------------------------------------------------------

    //3. Напишите программу, которая выдавала бы запрос на ввод широты в градусах,
    // минутах и секундах, после чего отображала бы широту в десятичном формате.
    //В одной минуте 60 секунд, а в одном градусе 60 минут;
    // представьте эти значения посредством символьных констант.
    // Для каждого вводимого значения следует
    //использовать отдельную переменную. Пример результата выполнения программы
    //выглядит следующим образом:
    // Enter a latitude in degrees, minutes, and seconds:
    // First, enter the degrees: 37
    // Next, enter the minutes of arc: 51
    // Finally, enter the seconds of arc: 19
    // 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees

//    int degrees, minutes, seconds;
//
//    cout << "Enter a latitude in degrees, minutes, and seconds\n";
//    cout << "First, enter the degrees: ";
//    cin >> degrees;
//    cout << "Next, enter the minutes of arc: ";
//    cin >> minutes;
//    cout << "Finally, enter the seconds of arc: ";
//    cin >> seconds;
//
//    const double minutesInDegree = 60.0;
//    const double secondsInDegree = 3600.0;
//
//    const double finalRes = degrees + (minutes / minutesInDegree) + (seconds / secondsInDegree);
//
//    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << finalRes << "degrees\n";


    //4. Напишите программу, которая выдавала бы запрос на ввод количества секунд в
    //виде целого значения (используйте тип long), и затем отображала бы эквивалентное
    //значение в сутках, часах, минутах и секундах.
    // Для представления количества часов в сутках, количества минут в часе и количества секунд в минуте используйте
    // символьные константы.
    // Пример результата выполнения программы выглядит следующим образом:
    //Enter the number of seconds: 3160000
    // 3160000 seconds = 365 days, 46 minutes, 40 seconds

    // Чтобы вычислить количество дней, часов, минут и секунд из общего количества секунд,
    // нужно последовательно делить общее количество секунд
    // на количество секунд в одном дне, часе и минуте, и получать остатки

//    long totalSeconds;
//    cout << "Enter amount of seconds: ";
//    cin >> totalSeconds;
//
//    const int secondsInMinute = 60;
//    const int secondsInHours = 3600;
//    const int secondsInDay = 84600;
//
//    // Кол-во дней
//    int dayAmount = totalSeconds / secondsInDay;
//    // Оставшиеся секунды после вычисления дней
//    long remainingSecondsAfterDay = totalSeconds % secondsInDay;
//
//    // Кол-во часов
//    int hourAmount = remainingSecondsAfterDay / secondsInHours;
//    // Оставшиеся секунды после вычисления часов
//    long remainingSecondsAfterHours = remainingSecondsAfterDay % secondsInHours;
//
//    // Кол-во минут
//    int minuteAmount = remainingSecondsAfterHours / secondsInMinute;
//
//    // Оставшиеся секунду после вычисления минут
//    int seconds = remainingSecondsAfterHours % secondsInMinute;
//
//    cout << "Days: " << dayAmount << endl;
//    cout << "Hours: " << hourAmount << endl;
//    cout << "Minutes: " << minuteAmount << endl;
//    cout << "Minutes: " << seconds << endl;

// -------------------------------------------------------------------------------------------------------------------

    //5. Напишите программу, которая выдавала бы запрос на ввод миль, которые вы
    // преодолели на автомобиле, и количества галлонов израсходованного бензина,
    // а затем выдавала бы отчет о том, сколько миль вы преодолели, израсходовав
    // один галлон бензина.
    // Или, если хотите , программа может запросить расстояние
    // в километрах и количество литров бензина, и затем представить отчет
    // в европейском стиле - в количестве литров, израсходованных на один километр.

    double distanceInMiles, gallonsEat;

    cout << "How much gallons your car eats per 100 miles?: ";
    cin >> gallonsEat;

    cout << "Enter distance you've driven: ";
    cin >> distanceInMiles;

    // Конвертация миль в километры
    const double distanceInKm = distanceInMiles * 1.60934; // Точное значение
    // Конвертация галлонов в литры
    const double litresEat = gallonsEat * 3.78541; // Точное значение

    // Вычисление топлива в галлонах
    const double gallonsUsed = (distanceInMiles / 100) * gallonsEat;
    // Вычисление топлива в литрах
    const double litresUsed = (distanceInKm / 100) * litresEat;

    cout << endl;

    cout << "American metric: --> For " << distanceInMiles << " miles, your car used " << gallonsUsed << " gallons of fuel" << endl;
    cout << "European metric: --> For " << distanceInKm << " km, your car used " << litresUsed << " liters of fuel" << endl;

// -------------------------------------------------------------------------------------------------------------------

    // 6. Напишите программу, которая выдавала бы запрос на ввод расхода бензина в
    // европейском стиле (количество литров на 100 км) и преобразовывала бы его
    //в стиль, принятый в США, - в милях на один галлон. Имейте в виду, что кроме
    //использования других единиц измерения в США, в отличие от европейских
    //стран , принято и другое соотношение: расстояние/топливо , а не топливо/расстояние.
    //Учтите, что 100 километров соответствуют 62.14 милям, а 1 галлон равен
    //3.875 литрам. Таким образом , 19 миль/галлон примерно равно 124 литров
    //на 100 км, а 27 миль/галлон примерно составляет 8.7 литров на 100 км.






    return 0;
}
