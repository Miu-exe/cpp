#include <iostream>
using namespace std;
int main() {
    int n, m, s[101] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j =0; j < m; j++) {
            int x;
            cin >> x;
            s[i] += x;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
}