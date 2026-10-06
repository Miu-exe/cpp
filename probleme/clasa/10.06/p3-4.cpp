//sa se interschimbe elementul de pe diagonala principala cu cel de pe diagonala secundara de pe fiecare linie i
#include <iostream>
using namespace std;
int main() {
    int n, a[101][101];
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        swap(a[i][i], a[i][n - 1 - i]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
