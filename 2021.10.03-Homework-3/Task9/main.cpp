#include <iostream>

using namespace std;

int main()
{
int a = 0;
int b = 0;
int c = 0;
int d = 0;

cin >> a;
cin >> b;
cin >> c;
cin >> d;

while (a <= b)
{
if (a % d == c)
{
cout << a;
cout << " ";
}

++a;
}

return EXIT_SUCCESS;
}