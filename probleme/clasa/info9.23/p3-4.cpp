//Se dă un vector cu n elemente. Să se ordoneze crescător prima jumătate a vectorului și
//descrescător a doua jumătate.
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;            // descending
}

int main() {
    int n, v[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int jum = n / 2;
    sort(v, v + jum);
    sort(v + jum, v + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

}