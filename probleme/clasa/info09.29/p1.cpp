#include <iostream>
using namespace std;
int main() {
    int a[101][101], n , m, s = 0;
    cin >> n>> m;
    for (int  i = 0; i < n; i++) {
        for (int j = 0; j< m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s += a[i][j];
        }
    }
    cout << s;
}