#include <iostream>
using namespace std;
//P2.4 (Exersare): Să se verifice dacă există vreo coloană în matrice care are toate elementele egale între
//ele.
int main() {
    int n, m, x, a, v[1001][1001];
    bool este = true;
    cin >> n >> m;
    for (int i =0 ;i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (int j =0; j < m; j++) {
        x = v[0][j];
        for (int i = 0; i < n; i++) {
            if (x != v[i][j]) 
                este = false;
                i =n;
                j =m;
                break;
        }
    }
    cout << este;
    
}