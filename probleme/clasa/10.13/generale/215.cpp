#include <iostream>
using namespace std;

int main()
{
    int n, c[7];
    cin >> n;
    for (int k = 1; k <= 5; k++)
    {
        c[k] = n % 10;
        n /= 10;
    }
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i == j)
                cout << 0 << " ";
            else
                cout << c[i < j ? i : j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
