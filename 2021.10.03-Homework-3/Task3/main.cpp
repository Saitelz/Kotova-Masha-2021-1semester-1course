#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int l = 2;
    int num = 1;
    int now_l = 1;

    cin >> a;

    while (num <= a)
    {
        for (now_l; now_l < l; now_l++)
        {
            if (num <= a)
            {
                cout << num;
                cout << " ";
                ++num;
            }
        }

        now_l = 1;
        ++l;
        cout << endl;
    }

    return EXIT_SUCCESS;
}