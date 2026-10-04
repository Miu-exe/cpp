#include <iostream>
#include <algorithm>
using namespace std;
//Să se reordoneze elementele de pe fiecare linie astfel încât numerele impare să se afle în ordine crescătoare la 
//începutul liniei, iar numerele pare, de asemenea în ordine crescătoare, la sfârșitul liniei.
//  ^^^^^ text ^^^^
//
// sort calls cmp(a, b) to ask: "should a come BEFORE b?"
// true  -> a goes before b
// false -> b goes before a (or they are equal)
bool cmp(int a, int b) {
    // different parity: one is odd, the other is even
    if (a % 2 != b % 2)
        // a goes first only if it is the odd one,
        // so odd numbers end up before even numbers
        return a % 2 == 1;
    // same parity: normal ascending order
    // (must stay "<" and not "<=", cmp(x, x) has to be false)
    return a < b;
}
int main() {
    int n,m, v[51][51];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j =0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        // v[i] = start of row i, v[i] + m = one past its last used element,
        // so this sorts only the first m elements of the row using cmp
        sort(v[i], v[i] + m, cmp);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}