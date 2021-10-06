#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int c = 0;

    cin >> c;

    for (; a <= c; ++a)
    {
        if (c % a == 0)
        {
            cout << a;
            cout << " ";
        }
    }

    return EXIT_SUCCESS;
}