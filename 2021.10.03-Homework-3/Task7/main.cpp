#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    for (;e <= 1000; ++e)
    {
        if(e * e * e * a + e * e * b + e * c + d == 0)
        {
            cout << e;
            cout << " ";
        }
    }

    return EXIT_SUCCESS;
}
