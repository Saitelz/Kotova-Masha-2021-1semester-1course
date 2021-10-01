#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int e = 0;
    int r = 0;
    int t = 0;

    cin >> a;
    cin >> b;
    cin >> e;
    cin >> r;
    cin >> t;

    if ((e == 0) || (a == 0))
        cout << r;
    else

    if (e <= a)
    {
        r = 2 * b;
        cout << r;
    }

    t = e;

    if (e > a)
        while (e > 0)
        {
            e -= a;
            r += 2 * b;
        }
    if ((!(a == 0)) && (!(t == 0)) && (t > a))
        cout << r;

    return EXIT_SUCCESS;
}