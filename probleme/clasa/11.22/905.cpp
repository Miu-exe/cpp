#include <iostream>
using namespace std;

void detcifre(int n, int &prima, int &ultima) {
    ultima = n % 10;
    while (n > 9) n /= 10;
    prima = n;
}

int main() {
    int n, p, u;
    cin >> n;
    detcifre(n, p, u);
    cout << p << " " << u;
    return 0;
}
