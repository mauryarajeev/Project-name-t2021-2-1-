#include <iostream>
using namespace std;

int main()
{
    int i;
    int a, n = 1;
    cin >> a;

    if (a % 2 != 0)
    {
        i = 0;
    }
    else
    {
        i = 1;
    }
    while (i < a)
    {
        cout << n << ",";
        n += 2;
        i++;
    }

    return 0;
}