#include <iostream>
using namespace std;

int main()
{
    int n, x, sp = 0, ss = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (i == j)
                sp += x;
            if (i + j == n - 1)
                ss += x;
        }
    cout << (sp > ss ? sp - ss : ss - sp);
    return 0;
}
