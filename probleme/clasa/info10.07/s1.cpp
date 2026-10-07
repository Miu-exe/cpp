//1 afisati zona n
//2 calculati sume elementelor de pe diagonaa secundara
//3 calculati suma elementelor de prima si ultima coloana
#include <fstream>
using namespace std;
ifstream cin("s1.in");
ofstream cout("s1.out");
int v[1001][1001];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }
    // 1 zona nord deasupra ambelor diagonale
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && i + j < n - 1) {
                cout << v[i][j] << " ";
            }
        }
    }
    cout << '\n';
    // 2 suma diagonalei secundare
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i][n - 1 - i];
    }
    cout << s << '\n';
    // 3 suma primei si ultimei coloane
    s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i][0] + v[i][n - 1];
    }
    cout << s << '\n';
    return 0;
}
