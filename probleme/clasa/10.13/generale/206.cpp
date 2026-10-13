#include <iostream>
using namespace std;

int main()
{
    int n, m, a[21][21];
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = i < j ? i : j;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
