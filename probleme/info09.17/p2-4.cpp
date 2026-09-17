#include <iostream>
using namespace std;
//Se dă un vector cu n elemente. Să se ștergă din vector prima și ultima apariție a valorii
//minime.
int main () {
    int n, v[1001], min = 2147483647;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < min) {
            min = v[i];
        }
    }
    int first, last;
    for (int i = 0; i < n; i++) {
        if (v[i] == min) {
            first = i;
            i = n + 1;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == min) {
            last = i;
            i = n + 1;
        }
    }
    for (int i = first; i < n; i++) {
        v[i] = v[i + 1];
    }
    n--;
    if (last != first) {
        last--;
        for (int i = last; i < n; i++) {
        v[i] = v[i + 1];
        }
    n--;
    }
    for (int i = 0; i < n; i++) 
        cout << v[i] << " ";
}