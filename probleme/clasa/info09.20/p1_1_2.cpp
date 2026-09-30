#include <iostream>
using namespace std;
//linia cu suma maxima, @ coloana cu vloarea minima globala
int main() {
    int n, m, s = 0, lmax = -1, min = 999999 ,cmax =0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            s += x;
            if (x < min)
                min =x;
                cmax = j;
        }
        if (lmax < s) 
            lmax = s;
        s =0;
    }
    cout << lmax << " " << cmax;
}