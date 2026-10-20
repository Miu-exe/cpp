#include <iostream>
using namespace std;
//suma elementelor pare
//nr elementelor cu 2 cifre
//maxim din matrici
int main() {
    int n, m, s = 0, cnt = 0, max = -1, maxpos = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x > max) {
                max = x;
                maxpos = 0;
            }
            else if(max == x) {
                maxpos++;
            }
            if (x%2==0) {
                s+= x;
            }
            if (x >= 10 && x <= 99) {
                cnt++;
            }
        }
    }
    cout << "Suma = " << s << "/n" << cnt << endl << max<< " " << maxpos;
    return 0;
}