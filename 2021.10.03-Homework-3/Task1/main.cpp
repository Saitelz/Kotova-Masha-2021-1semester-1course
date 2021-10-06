#include <iostream>

using namespace std;

int main()
{
int a = 0;
int fact = 1;
int quality = 1;

cin >> a;

while (quality < a + 1)
{
fact = fact * quality;
++quality;
}

cout << fact;
cout << endl;

return EXIT_SUCCESS;
}