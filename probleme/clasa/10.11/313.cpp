#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, d1 = 0, d2 = 0, div;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (i == j) {
                d1 += x;
            }
            if ((i + j) == (n - 1)) {
                d2 += x;
            }
        }
    }
    div = abs(d1 - d2);
    cout << div;
}