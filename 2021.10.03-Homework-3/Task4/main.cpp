#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int a_fact = 1;
    int b_fact = 1;
    int ab_fact = 1;

    cin >> a;
    cin >> b;

    int ab = a - b;

    if (ab > 0)
    {
        for (; ab > 0; --ab)
        {
            ab_fact = ab_fact * ab;
        }

        for (; a > 0; --a)
        {
            a_fact = a_fact * a;
        }

        for (; a > 0; --a)
        {
            b_fact = b_fact * b;
        }
    }
    cout << a_fact / (ab_fact * b_fact);
    cout << endl;

    return EXIT_SUCCESS;
}