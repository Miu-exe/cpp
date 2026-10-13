#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int mx = -2000000000;
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if ((i == j || i + j == n - 1) && x > mx)
                mx = x;
        }
        cout << mx << "\n";
    }
    return 0;
}
