//1 afisati suma zonei S
//2 suma elementelor de pe diagonala principala
//3 suma marginilor
//matrice v[1001][1001] patratica cu latura n de la 0
#include <fstream>
using namespace std;
ifstream cin("s2.in");
ofstream cout("s2.out");
int v[1001][1001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    // 1 suma zonei sud sub ambele diagonale
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && i + j > n - 1) {
                s += v[i][j];
            }
        }
    }
    cout << s << '\n';
    // 2 suma diagonalei principale
    s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i][i];
    }
    cout << s << '\n';
    // 3 suma marginilor
    s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                s += v[i][j];
            }
        }
    }
    cout << s << '\n';
    return 0;
}
