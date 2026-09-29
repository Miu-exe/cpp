#include <iostream>
using namespace std;
int main() {
    int n, m , a[101][101], p = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i+= 2) {
        for (int j =0; j < m; j++) {
            if (a[i][j] != 0) {
                p *= a[i][j];
            }
        }
    }
    cout << p;
}