#include <iostream>
using namespace std;
//Se citește un număr x. Să se verifice dacă x apare în vector, iar în caz afirmativ să se
//ștergă toate aparițiile sale.
int main() {
    int n, v[1001], x;
    cin >> n;
    cin >> x;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            for (int j = i; j < n - 1; j++)
                v[j] = v[j + 1];
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}