#include <iostream>
using namespace std;
// se dau cun vec cu n el sa se det cate el din vectr sunt egal departate de acpetele cu acesi valuare
int main () {
    int v[1001], n, cnt = 0;
    cin >> n;
    for (int i = 0 ; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n/2; i++) {
        if (v[i] == v[n-1-i])
            cnt ++;
    }
    cout << cnt;
    return 0;
}