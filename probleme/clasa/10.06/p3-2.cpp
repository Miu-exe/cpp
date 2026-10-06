//sa se gaseasca elementul maxim de sub diagonala principala
#include <iostream>
using namespace std;
int main() {
    int n, a[101][101], mx;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    mx = a[1][0];
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i][j] > mx)
                mx = a[i][j];
    cout << mx;
}
