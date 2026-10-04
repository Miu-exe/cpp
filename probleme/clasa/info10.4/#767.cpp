#include <iostream>
using namespace std;
int main() {
    int n, m, s=0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j =0; j < m; j++) {
            int x;
            cin >> x;
            if (x%2==0) {
                s+=x;
            }
        }
    }
    cout << s;
}