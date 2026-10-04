#include <iostream>
using namespace std;
int main() {
    int n, m, s[101] = {0}, max = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j =0; j < m; j++) {
            int x;
            cin >> x;
            s[i] += x;
            if (max < x) max = x;
        }
        s[i] -= max;
        max = -1;
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
}