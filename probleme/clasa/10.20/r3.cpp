#include <iostream>
using namespace std;
//Sumele diagonalelor
//Elemente deasupra diagonalei principale
//Suma elementelor dintre diagonale
int main () {
    int n,v[100][100], s= 0,s1 = 0, s2=0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (i == j) {
                s+= v[i][j];
            }
            if (i+j == n -1) {
                s1+= v[i][j];
            }
            if ((i > j) && (i + j < n-1)) {
                s2 += v[i][j];
            }
        }
    }
    cout << s << " " << s1 << " " << s2;
    return 0;
}