//Să se verifice dacă două numere date au exact aceleași cifre, folosind doi vectori de
//frecvență.
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a,b, v1[10] = {0}, v2[10] = {0};
    cin >> a >> b;
    while (a > 0) {
        int x = a % 10;
        v1[x]++;
        a/=10;
    }
    while (b > 0) {
        int x = b % 10;
        v2[x]++;
        b/=10;
    }
    if (ranges::equal(v1, v2)) {
        cout << "Vectorii sunt identici!\n";
    } else {
        cout << "Vectorii sunt diferiti.\n";
    }
}