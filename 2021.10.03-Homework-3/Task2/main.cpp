#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int num = 1;

    cin >> a;

    while (a > 0)
    {
        num = num * 2;
        a = a - 1;
    }

    cout << num;
    cout << endl;

    return EXIT_SUCCESS;
}