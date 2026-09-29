#include <iostream>
using namespace std;
int main() {
    int n, m , a[101][101], s = 0, t= 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cin >> a[i][j];
            if (a[i][j] > 0) {
                s += a[i][j];
                t++;
            }
        }
    }
    cout << double(s/t);
}