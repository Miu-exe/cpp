#include <iostream>
using namespace std;

int main()
{
    int n, m, x = 1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << x * x << " ";
            x += 2;
        }
        cout << "\n";
    }
    return 0;
}
