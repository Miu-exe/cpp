#include <iostream>
using namespace std;
//Să se ordoneze un vector astfel încât toate numerele negative să fie la 
//început (în ordine
//crescătoare), urmate de numerele pozitive (în ordine descrescătoare).
int main () {
    int n, v[10001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    bool ispos = false;
    int wherestart;
    for (int i = 0; i < n; i ++) {
        if (v[i] >= 0) {
            ispos = true;
            wherestart = i;
            break;
        }
    }
    if (ispos) {
        for (int i = wherestart; i < n - 1; i++) {
        for (int j = wherestart; j < n - (i - wherestart) - 1; j++) {
            if (v[j] < v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}