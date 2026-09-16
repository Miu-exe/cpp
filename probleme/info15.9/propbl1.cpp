#include <iostream>
using namespace std;
// nr max pos nr max si de cate ori apare, si media arit nr > ca zero
int main() {
    int v[1001], n, max, cnt_pos = 0;
    double med = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > 0) {
            med += v[i];
            cnt_pos++;
        }
    }
    max = v[0];
    for (int i = 1; i < n; i++) {
        if (max < v[i]) {
            max = v[i];
        }
    }
    med = med / cnt_pos;
    cout << "media: " << med << endl;
    cout << "nr max: " << max << " pos nr max: ";
    for (int i = 0; i < n; i++) {
        if (v[i] == max) {
            cout << i << " ";
        }
    }
    return 0;
}