#include <iostream>
using namespace std;
//Se dă un șir cu n elemente naturale. Să se insereze în șir după fiecare element par dublul său.
int main() {
    int n, v[51];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++) {
        if (v[i] % 2 == 0) {
            for (int j = n; j > i; j--)
                v[j + 1] = v[j];
            v[i + 1] = 2 * v[i];
            n++;
            i++;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";

    return 0;
}
