#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int d1 = i - j, d2 = i + j - (n + 1);
            if ((d1 >= -k && d1 <= k) || (d2 >= -k && d2 <= k))
                cout << 1 << " ";
            else
                cout << 2 << " ";
        }
        cout << "\n";
    }
    return 0;
}
