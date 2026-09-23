//se da un vector x cu n elemente, construiti un vector de frecventa aferent vec x;
#include <iostream>
using namespace std;
int main() {
    int n, x[1001], v[1001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
        v[x[i]]++;
    }
    for (int i = 0; i <  n; i++) {
        cout << i << " apare de " << x[i] << " ori" << endl;
    }
}