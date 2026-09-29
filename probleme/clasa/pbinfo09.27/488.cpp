#include <iostream>
using namespace std;
//Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele cu indici pari în ordinea crescătoare a indicilor, iar elementele cu indici impari în ordinea descrescătoare a indicilor.
int main() {
    int n, v[1001];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 2; i <= n; i += 2)
        cout << v[i] << " ";
    cout << "\n";
    int start = (n % 2 == 1) ? n : n - 1;
    for (int i = start; i >= 1; i -= 2)
        cout << v[i] << " ";
    cout << "\n";

    return 0;
}
