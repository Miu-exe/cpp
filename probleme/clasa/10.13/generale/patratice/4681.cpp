#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            while (x % 5 == 0)
                x /= 5;
            while (x % 3 == 0)
                x /= 3;
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
