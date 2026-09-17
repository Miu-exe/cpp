#include <iostream>
using namespace std;
//Se citește un vector cu n elemente. Să se afișeze mai întâi elementele de pe poziții
//impare de la stânga la dreapta, apoi elementele de pe poziții pare de la dreapta la stânga.

int main() {
    int n, v[1001];
    cin >> n;
    for (int i = 0; i < n; i ++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i+=2) {
        cout << v[i] << " ";
    }
    cout << endl;
    int n1 = n - 1;
    if (n % 2 != 0) {
        n1 = n - 2;
    }

    for (int i = n1; i > 0; i-=2) {
         cout << v[i] << " ";
    }
}