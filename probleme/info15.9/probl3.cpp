//sa se vefice daca un array este simetric fara a se folosi un vec aux
#include <iostream>
using namespace std;
int main() {
    int v[1001], n;
    bool simetric = true;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n / 2; i++) {
        if (v[i] != v[n - 1 - i]) {
            simetric = false;
            break;
        }
    }
    if (simetric)
        cout << "simetric";
    else
        cout << "nu este simetric";
    return 0;
}
