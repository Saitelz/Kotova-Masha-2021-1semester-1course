#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 1;

    cin >> a;
    cin >> b;

    for (; b >= a; ++a)
    {
        for (c; c <= a; ++c)
        {
            if (c * c == a)
            {
                cout << a;
                cout << " ";
            }
        }
        c = 1;
    }

    return EXIT_SUCCESS;
}