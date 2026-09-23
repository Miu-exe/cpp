#include <iostream>
using namespace std;
//Să se verifice dacă un vector este palindromic (simetric) fără a folosi un vector
//auxiliar.
int main() {
    int n, v[1001];
    bool da = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n/2; i++) {
        if (v[i] != v[n - i - 1]) {
            da = false;
            break;
        }
    }
    cout << da;
}