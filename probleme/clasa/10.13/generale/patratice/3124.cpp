#include <iostream>
using namespace std;

int a[500][500];
bool v[250001];

int main()
{
    int n;
    bool ok = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] < 1 || a[i][j] > n * n || v[a[i][j]])
                ok = false;
            else
                v[a[i][j]] = true;
        }
    if (ok)
    {
        int k = n * (n * n + 1) / 2, sp = 0, ss = 0;
        for (int i = 0; i < n; i++)
        {
            int sl = 0, sc = 0;
            for (int j = 0; j < n; j++)
            {
                sl += a[i][j];
                sc += a[j][i];
            }
            if (sl != k || sc != k)
                ok = false;
            sp += a[i][i];
            ss += a[i][n - 1 - i];
        }
        if (sp != k || ss != k)
            ok = false;
    }
    cout << (ok ? "true" : "false");
    return 0;
}
