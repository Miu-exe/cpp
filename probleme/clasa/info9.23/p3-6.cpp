//Se citesc cifrele mai multor numere. Folosind un vector de frecvență, să se determine
//cifra care a apărut de cele mai puține ori (dar cel puțin o dată).
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, v[10] = {0};
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    int max = 99999;
    int pos_m = 0;
    for (int i = 0 ; i < 10; i++) {
        if (v[i] > 0 && v[i] < max) {
            max  = v[i];
            pos_m = i;
        }
    }
    cout << pos_m;
}