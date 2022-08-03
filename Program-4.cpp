#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 1;
    cin >> n;
    int a[100];
    // insert the element of array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 9; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
            {
                count++;
            }
        }
        cout << i << ":" << count << ",";
    }
    return 0;
}