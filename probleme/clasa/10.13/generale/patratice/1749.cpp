#include <iostream>
using namespace std;

int main()
{
    int n, z, x, s = 0;
    cin >> n >> z;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (z == 1 && i < j && i + j < n - 1)
                s += x;
            if (z == 2 && i < j && i + j > n - 1)
                s += x;
            if (z == 3 && i > j && i + j > n - 1)
                s += x;
            if (z == 4 && i > j && i + j < n - 1)
                s += x;
        }
    cout << s;
    return 0;
}
