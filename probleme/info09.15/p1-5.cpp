#include <iostream>
using namespace std;
//Să se determine suma elementelor aflate pe poziții pare și produsul elementelor impare
//ca valoare din vector.
int main() {
    int n,v[1001],sum = 0, prod = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i % 2 == 0) {
            sum += v[i];
        }
        else {
            prod *= v[i];
        }
    }
    cout << "sum " << sum << " prod " << prod;
}