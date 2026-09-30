#include <iostream>
using namespace std;
//matrice n m, calculati valoarea minima globala si afisati linia si coloana ei
int main() {
    int n, m, min = 99999, pi, x, pj;
    cin >> n >> m;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; i < m; m++) {
            cin >> x;
            if (x < min) {
                min = x;
                pi = i;
                pj = j;
            }
        }
    }
    cout << min << " " << pi << " " << pj;
    return 0;
}