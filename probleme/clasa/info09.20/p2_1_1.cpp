#include <iostream>
using namespace std;
// matrice n m sa se faca suma linilor
int main() {
    int n,m, v[1001] = {0};
    cin >> n >> m;
    for (int i= 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            v[j]+=x;
        }
    }
    for (int i = 0; i < m ; i++) {
        cout << v[i] << " ";
    }
}