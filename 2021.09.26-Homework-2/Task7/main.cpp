#include <iostream>
using namespace std;


int main()
{
    int c = 0;
    int d = 0;
    int f = 0;

    cin >> c;
    cin >> d;
    cin >> f;

    if (((c == d) && (c % f == 0)) || ((c = f) && (c % d == 0)) || (((c == f) & (d == 1)) || ((c == d) & (f == 1))))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return EXIT_SUCCESS;
}