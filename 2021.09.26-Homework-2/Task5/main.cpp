#include <iostream>
using namespace std;


int main()
{
    int m;

    cin >> m;

    if (m == 1 || m % 4 == 0)
        cout << "YES";

    else
    cout << "NO";

    return EXIT_SUCCESS;
}