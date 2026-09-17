#include <iostream>
using namespace std;
//Să se găsească valoarea minimă și valoarea maximă din vector și să se afișeze numărul
//de elemente cuprinse între prima apariție a minimului și ultima apariție a maximului.

int main() {
    int n, v[1001], min = 2147483647 , minp, max = -2147483647, maxp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] >= max) {
            max = v[i];
            maxp = i;
        }
        if (v[i] < min) {
            min = v[i];
            minp = i;
        }
    }
    int dif = 0;;
    if (maxp > minp) {
        dif = maxp - minp - 1;
    }
    cout <<dif;
}