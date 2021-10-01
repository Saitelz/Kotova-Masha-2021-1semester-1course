#include <iostream>
using namespace std;


int main()
{
    int m = 0;
    int n = 0;
    int a = 0;
    int b = 0;

    cin >> m;
    cin >> n;
    cin >> a;
    cin >> b;

    if ((m - a) == (n - b) or (m == a) or (n == b))
        cout << "YES";

    else
    cout << "NO";

    return EXIT_SUCCESS;
}