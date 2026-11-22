#include <iostream>
using namespace std;

// ordoneaza crescator doar elementele a[st..dr]
void sortare(int a[], int st, int dr) {
    for (int i = st; i < dr; i++) {
        for (int j = i + 1; j <= dr; j++) {
            if (a[i] > a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

int main() {
    int n, st, dr, a[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> st >> dr;
    sortare(a, st, dr);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
