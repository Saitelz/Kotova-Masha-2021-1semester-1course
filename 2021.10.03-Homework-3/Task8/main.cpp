#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int sum = 0;
    int b = 0;

    cin >> a;

    while (a > 0)
    {
        cin >> b;

        sum = sum + b;

        --a;
    }

    cout << sum;
    cout << endl;

    return EXIT_SUCCESS;
}