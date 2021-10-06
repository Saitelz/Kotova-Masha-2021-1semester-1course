#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int c = 0;
    int plus = 0;
    int minus = 0;
    int zero = 0;

    cin >> a;

    while (a > 0)
    {
        cin >> c;

        if (c > 0)
        {
            ++plus;
        }
        else if (c < 0)
        {
            ++minus;
        }
        else if (c == 0)
        {
            ++zero;
        }
        --a;
    }

    cout << zero;
    cout << " ";
    cout << plus;
    cout << " ";
    cout << minus;
    cout << endl;

    return EXIT_SUCCESS;
}