//daga toate elementele de sub diagonala principala sunt 0
#include <iostream>
using namespace std;
int main () {
    int n, v[100][100];
    bool triunghi = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (i > j) {
               if (v[i][j] != 0) {
                triunghi = false;
                break;
               }
            }
        }
    }
    cout << triunghi;
}