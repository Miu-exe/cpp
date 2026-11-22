#include <iostream>
using namespace std;

int sumdiv(int n) {
    int s = 0;
    for (int d = 1; d * d <= n; d++) {
        if (n % d == 0) {
            s += d;
            if (d != n / d) s += n / d;
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << sumdiv(n);
    return 0;
}
