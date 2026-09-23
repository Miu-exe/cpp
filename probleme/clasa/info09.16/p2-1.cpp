#include <iostream>
using namespace std;

//P2.1 (Rezolvată la tablă): Se dă un vector cu n numere întregi.
//Să se ștergă din vector toate elementele
//nule.
int main() {
    int n, v[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int m = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            v[m] = v[i];
            m++;
        }
    }
    n = m;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
