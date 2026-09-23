#include <iostream>
using namespace std;
//Se citește un vector cu n elemente întregi. Să se determine media aritmetică a
//elementelor strict pozitive și valoarea maximă din vector alături de toate pozițiile pe care apare.
int main () {
    int n, v[1001], max = -2147483640, max_pos = 0;
    double med =0, elpos = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
            //max_pos = i;
        }
        if (v[i] > 0) {
            med += v[i];
            elpos++;
        }
    }
    cout << "max: " << max << endl;
    cout << "max pos: ";
    for (int i = 0; i < n; i++) {
        if (v[i] == max) {
            cout << i << " ";
        }
    }

    med /= elpos;
    cout <<" med: " << med;
}
