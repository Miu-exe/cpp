#include <iostream>
using namespace std;
//P3.3 (Lucru individual): Să se ordoneze descrescător un vector și apoi să se afișeze elementele unice
int main () {
    int n, v[10001] = {0}, max = -1;;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        v[x]++;
        if (x > max) {
            max = x;
        }
    }
    for (int i = max; i >= 0; i--) {
        if (v[i] > 0) {
            cout << i << " ";
        }
    }
}