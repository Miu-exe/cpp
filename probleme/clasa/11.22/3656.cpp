#include <iostream>
using namespace std;

int fgreater(int a[], int n, int x) {
    int r = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > x && (r == -1 || a[i] < r)) r = a[i];
    }
    return r;
}

int main() {
    int n, x, a[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    cout << fgreater(a, n, x);
    return 0;
}
