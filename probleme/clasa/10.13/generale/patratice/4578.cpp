#include <iostream>
using namespace std;

int main()
{
    int n, x, p[20], s[20];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (i == j)
                p[i] = x;
            if (i + j == n - 1)
                s[i] = x;
        }
    long long mx = (long long)p[0] * s[0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if ((long long)p[i] * s[j] > mx)
                mx = (long long)p[i] * s[j];
    cout << mx;
    return 0;
}
