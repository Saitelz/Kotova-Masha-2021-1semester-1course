#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int m = 0;
    int n = 0;

    cin >> a;
    cin >> b;
    cin >> m;
    cin >> n;

    if ((a != 0) && (b % a == 0) && (m * ((-b) / a) + n != 0))
    {
        cout << (-b) / a << endl;
    }
    else if ((a == 0) && (b == 0))
    {
        cout << "INF" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return EXIT_SUCCESS;
}