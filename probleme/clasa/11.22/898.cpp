#include <iostream>
using namespace std;

int fact(int x) {
    int p = 1;
    for (int i = 2; i <= x; i++) p *= i;
    return p;
}

int sumfactcif(int n) {
    if (n == 0) return 1; // 0! = 1
    int s = 0;
    while (n > 0) {
        s += fact(n % 10);
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << sumfactcif(n);
    return 0;
}
