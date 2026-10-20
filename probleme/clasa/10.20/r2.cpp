#include <iostream>
using namespace std;
//Suma fiecărei linii
//Coloana cu suma maximă
//Linii care conțin doar numere pare
int main() {
    int m,n, lini[1000] = {0}, colon[1000] = {0};
    cin >> n >> m;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            lini[i]+=x;
            colon[j]+=x;
        }
    }
    int max = -1, posm;
    for (int i = 0; i < m; i++) {
        if (colon[i] > max) {
            max  = colon[i];
            posm = i;
        }
    }
    cout << "Suma linilor si daca sunt pare sau nu: " << endl;
    for (int i = 0; i < n; i++) {
        bool pare = false;
        if (lini[i] % 2 == 0) {
            pare = true;
        }
        cout << "Suma = " << lini[i] << " Pare = " << pare << endl;
    }
    cout << "coloana cu suma maxima = " << posm << " Cu sum " << max;
    return 0;
}