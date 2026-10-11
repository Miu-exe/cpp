#include <iostream>
using namespace std;
int getGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main () {
    int n, up = 0, down = 0, div;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            int x;
            cin >> x;
            if (i < j) {
                up +=x;
            }
            if (i > j) {
                down += x;
            }
        }
    }
    div = getGCD(up,down);
    cout << div;
}