//sa se determine media aritmetica a elementelor aflate pe ambele diagonale
#include <iostream>
using namespace std;
int main() {
    int n, s = 0, k = 0, a[101][101];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == j || i + j == n - 1) {
                s += a[i][j];
                k++;
            }
        }
    }
    cout << (double)s / k;
}
