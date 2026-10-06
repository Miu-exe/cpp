//sa se afiseze elementele din zona de Est (sub diagonala principala si deasupra diagonalei secundare: i > j si i + j > n + 1)
#include <iostream>
using namespace std;
int main() {
    int n, a[101][101];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i > j && i + j > n - 1)
                cout << a[i][j] << " ";
}
