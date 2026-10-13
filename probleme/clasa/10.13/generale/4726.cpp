#include <iostream>
using namespace std;

int nrcif(int x)
{
    int c = 0;
    while (x)
    {
        c++;
        x /= 10;
    }
    return c;
}

int alipire(int a, int b)
{
    int p = 1;
    for (int i = 0; i < nrcif(b); i++)
        p *= 10;
    return a * p + b;
}

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x = alipire(i, j), y = alipire(j, i);
            cout << (x < y ? x : y) << " ";
        }
        cout << "\n";
    }
    return 0;
}
