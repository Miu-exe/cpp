#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int limit = n;
    for (int i = 3; i*i <=  limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n, m, k = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (i % 2 == 1) {
                if (isPrime(x)) {
                    k++;
                }
            }
        }
    }
    cout << k;
}