#include <iostream>
using namespace std;

void sortare(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

int main() {
    int n, a[1001];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sortare(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
