//sa se verifice daca toate elementele din zona Sud (sub ambele diagonale) sunt pozitive
#include <iostream>
using namespace std;
int main() {
    int n, a[101][101];
    bool ok = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i > j && i + j > n - 1 && a[i][j] <= 0)
                ok = false;
    if (ok)
        cout << "DA";
    else
        cout << "NU";
}
