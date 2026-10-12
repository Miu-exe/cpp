#include <iostream>
using namespace std;
int main () {
    int n, v[100][100];
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                if (v[i][j] != 1) {
                    ok = false;
                    break;
                }
            }
            else if (v[i][j] != 0) {
                ok = false;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}