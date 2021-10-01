#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int enterNumber = 0;

    cout << "Введите целое число (от 1 до 999): ";
    cin >> enterNumber;

    if (enterNumber <= 0 || enterNumber > 999)
        cout << "Число не входит в диапазон от 1 до 999!\n";
    else
    {
        if ((enterNumber / 100) % 10 == 1) cout << "сто ";
        else if ((enterNumber / 100) % 10 == 2) cout << "двести ";
        else if ((enterNumber / 100) % 10 == 3) cout << "триста ";
        else if ((enterNumber / 100) % 10 == 4) cout << "четыреста ";
        else if ((enterNumber / 100) % 10 == 5) cout << "пятьсот ";
        else if ((enterNumber / 100) % 10 == 6) cout << "шестьсот ";
        else if ((enterNumber / 100) % 10 == 7) cout << "семьсот ";
        else if ((enterNumber / 100) % 10 == 8) cout << "восемьсот ";
        else if ((enterNumber / 100) % 10 == 9) cout << "девятьсот ";

        if ((enterNumber / 10) % 10 == 1)
        {
            if (enterNumber % 10 == 0) cout << "десять бананов";
            else if (enterNumber % 10 == 1) cout << "одинадцать бананов ";
            else if (enterNumber % 10 == 2) cout << "двенадцать бананов ";
            else if (enterNumber % 10 == 3) cout << "тринадцать бананов";
            else if (enterNumber % 10 == 4) cout << "четырнадцать бананов";
            else if (enterNumber % 10 == 5) cout << "пятнадцать бананов";
            else if (enterNumber % 10 == 6) cout << "шестнадцать бананов";
            else if (enterNumber % 10 == 7) cout << "семнадцать бананов";
            else if (enterNumber % 10 == 8) cout << "восемнадцать бананов";
            else if (enterNumber % 10 == 9) cout << "девятнадцать бананов";
        }

        if ((enterNumber / 10) % 10 == 2) cout << "двадцать ";
        else if ((enterNumber / 10) % 10 == 3) cout << "тридцать ";
        else if ((enterNumber / 10) % 10 == 4) cout << "сорок ";
        else if ((enterNumber / 10) % 10 == 5) cout << "пятьдесят ";
        else if ((enterNumber / 10) % 10 == 6) cout << "шестьдесят ";
        else if ((enterNumber / 10) % 10 == 7) cout << "семьдесят ";
        else if ((enterNumber / 10) % 10 == 8) cout << "восемьдесят ";
        else if ((enterNumber / 10) % 10 == 9) cout << "девяносто ";

        if ((enterNumber / 10) % 10 != 1)
        {
            if (enterNumber % 10 == 0) cout << "ноль бананов";
            else if (enterNumber % 10 == 1) cout << "один банан ";
            else if (enterNumber % 10 == 2) cout << "два банана ";
            else if (enterNumber % 10 == 3) cout << "три банана ";
            else if (enterNumber % 10 == 4) cout << "четыре банана ";
            else if (enterNumber % 10 == 5) cout << "пять бананов ";
            else if (enterNumber % 10 == 6) cout << "шесть бананов ";
            else if (enterNumber % 10 == 7) cout << "семь бананов ";
            else if (enterNumber % 10 == 8) cout << "восемь бананов ";
            else cout << "девять бананов ";
        }
    }

    cout << endl << endl;
    return EXIT_SUCCESS;
}