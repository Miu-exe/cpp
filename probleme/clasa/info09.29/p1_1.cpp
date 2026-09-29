#include <iostream>
using namespace std;
int main() {
    int n,m, s = 0, a[101][101];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] % 2 == 1) {
                s += a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0) {
                cout << a[i][j] << " ";
            }
            else
                cout << "Nu e par ";
        }
        cout << endl;
    }
    cout << s;
}