#include <fstream>
using namespace std;
//Se dau mai multe numere naturale, fiecare cu cel mult 9 cifre. Să se afișeze, în ordine descrescătoare, toate cifrele care apar în numerele date.
int main() {
    ifstream in("cifreord1.in");
    ofstream out("cifreord1.out");
    int x, f[10] = {0};
    while (in >> x) {
        do {
            f[x % 10]++;
            x /= 10;
        } while (x != 0);
    }
    int cnt = 0;
    for (int c = 9; c >= 0; c--) {
        for (int k = 1; k <= f[c]; k++) {
            out << c;
            cnt++;
            if (cnt % 20 == 0)
                out << "\n";
            else
                out << " ";
        }
    }

    return 0;
}
