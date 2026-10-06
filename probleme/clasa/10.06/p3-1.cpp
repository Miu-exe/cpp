//sa se calculeze suma elementelor de pe diagonala primcipala si suma celor de pe diagonala secundara
#include <iostream>
using namespace std;
int main() {
    int n, s1 = 0, s2 = 0, a[101][101];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i == j)
                s1 += a[i][j];
            if (i + j == n - 1)
                s2 += a[i][j];
        }
    }
    cout << s1 << " " << s2;
}
