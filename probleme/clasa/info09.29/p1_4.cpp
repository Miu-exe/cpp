#include <iostream>
using namespace std;
int main() {
    int n, m , a[101][101], t = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m ; j++) {
            cin >> a[i][j];
            if (a[i][j] == 0) 
                t++;
        }
    }
    cout << t;
}