#include <iostream>
using namespace std;
//Se citesc de la tastatură numere întregi până la apariția lui zero. Să se determine cea mai mică dintre valorile pozitive citite.
int main() {
    int x, mn = 1000000;
    cin >> x;
    while (x != 0) {
        if (x > 0 && x < mn)
            mn = x;
        cin >> x;
    }
    if (mn == 1000000)
        cout << "NU EXISTA";
    else
        cout << mn;

    return 0;
}
