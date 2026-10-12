#include <iostream>
using namespace std;
int main () {
    int n, m, v[100][100];
    cin >> n >> m; 
    bool negru = false;
    bool radbefore = negru;
    for (int i = 0; i < n; i++) {
        negru = radbefore;
        for (int j = 0 ; j < m; j++) {
            if (negru) v[i][j] = 0;
            else v[i][j] = 1;
            negru = !negru;
        }
        radbefore = !radbefore;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}