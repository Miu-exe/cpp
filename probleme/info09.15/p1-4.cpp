#include <iostream>
using namespace std;
//Se dă un vector cu n numere întregi. Să se determine numărul de elemente din vector
//care sunt strict mai mari decât media aritmetică a tuturor elementelor.
int main() {
    int n, v[1001];
    cin >> n;
    double med = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        med += v[i];
    }
    med /= n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > med) {
            cnt++;
        }
    }
    cout << cnt;
}