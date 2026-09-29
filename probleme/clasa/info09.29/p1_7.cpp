#include <iostream>
using namespace std;
//P1.7 (Exersare): Se dă o matrice n x m. Să se numere câte elemente din matrice sunt divizibile cu un
//număr k dat.
int main() {
    int n, m, k, a[101][101];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cin >> k;

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] % k == 0)
                cnt++;

    cout << cnt << endl;
    return 0;
}