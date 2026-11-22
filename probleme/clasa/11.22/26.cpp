#include <iostream>
using namespace std;

int minim(int n) {
    int f[10] = {0};
    if (n == 0) return 0;
    while (n > 0) {
        f[n % 10]++;
        n /= 10;
    }
    int r = 0;
    // prima cifra nu poate fi 0
    for (int c = 1; c <= 9; c++) {
        if (f[c] > 0) {
            r = c;
            f[c]--;
            break;
        }
    }
    for (int c = 0; c <= 9; c++) {
        while (f[c] > 0) {
            r = r * 10 + c;
            f[c]--;
        }
    }
    return r;
}

int main() {
    int n;
    cin >> n;
    cout << minim(n);
    return 0;
}
