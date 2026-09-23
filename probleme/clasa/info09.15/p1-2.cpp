#include <iostream>
using namespace std;
//Se dă un vector cu n elemente. Să se determine câte elemente din vector sunt
//egal depărtate de capete și au aceeași valoare ( v[i] == v[n - i + 1] ).
int main() {
    int n, v[1001], cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i ++)
        cin >> v[i];
    for (int i = 0; i < n/2; i++) {
        if (v[i] == v[n - 1 - i])
            cnt++;
    }
    cout << cnt;
}