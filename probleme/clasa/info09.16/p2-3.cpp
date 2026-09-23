#include <iostream>
using namespace std;
//Să se insereze după fiecare element prim dublul acestuia.

bool ifprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main () {
    int n, v[1001];
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    for (int i = 0; i < n; i++) {
        if (ifprime(v[i])) {
            int p = i;
            
            for (int j = n; j >= p ; j-- ) {
                v[j+1] = v[j];
            }
            v[p+1] = 2*v[p];
            n++;
            i++;
        }
    }
    for (int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }
}