#include <iostream>
using namespace std;
//Să se insereze valoarea maximă a vectorului imediat după fiecare element negativ.
int main () {
    int n, max = -2147483640, v[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            for (int j = n; j > i; j--) {
                v[j + 1] = v[j];
            }
            n++;
            v[i + 1] = max;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}