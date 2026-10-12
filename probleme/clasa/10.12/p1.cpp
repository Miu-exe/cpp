// se da o matrice patrata verificati daca aceasta matrice este simetrica a[i][j] == a[j][i]
#include <iostream>
using namespace std;
int maint() {
    int n, a[100][100];
    bool simetrica = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        if (a[i][j] != a[j][i]) {
            simetrica = false;
            break;
        }
    }
    cout << simetrica;
}