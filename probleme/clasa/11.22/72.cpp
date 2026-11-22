#include <iostream>
using namespace std;

// suma elementelor din afara intervalului de indici [st, dr]
// (vectorul e indexat de la 1 la n)
int sumvec(int a[], int n, int st, int dr) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        if (i < st || i > dr) s += a[i];
    }
    return s;
}

int main() {
    int n, st, dr, a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> st >> dr;
    cout << sumvec(a, n, st, dr);
    return 0;
}
