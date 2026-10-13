#include <iostream>
using namespace std;

int main()
{
    int n, a[10], k = 0;
    cin >> n;
    while (n)
    {
        a[k++] = n % 10;
        n /= 10;
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
            cout << a[j] << " ";
        cout << "\n";
    }
    return 0;
}
