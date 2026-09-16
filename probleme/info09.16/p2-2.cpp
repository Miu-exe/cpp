#include <iostream>
using namespace std;
//Să se insereze valoarea 0 înaintea fiecărui element par din vector.

int main () {
    int n, v[1001];
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            int p = i;
            
            for (int j = n; j >= p ; j-- ) {
                v[j+1] = v[j];
            }
            v[p] = 0;
            n++;
            i++;
        }
    }
    for (int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }
}