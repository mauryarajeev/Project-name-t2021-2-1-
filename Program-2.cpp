#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int a, n = 1;
    cin >> a;
    while (i < a)
    {
        cout << n << ",";

        n += 2;
        i++;
    }
    return 0;
}