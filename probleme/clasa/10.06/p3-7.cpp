//sa se calculeze suma elementelor de pe bordura matricei (prima/ultima linie, prima/ultima coloana)
#include <iostream>
using namespace std;
int main() {
    int n, s = 0, a[101][101];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                s += a[i][j];
        }
    }
    cout << s;
}
