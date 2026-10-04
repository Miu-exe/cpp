#include <iostream>
using namespace std;
//Scrieți un program care citește de la tastatură două numere naturale din intervalul [2,50], n și m, și elementele unui tablou bidimensional cu n linii și m coloane, numere naturale distincte din intervalul [0,104].

//Programul interschimbă valoarea minimă din ultima coloană a tabloului cu valoarea minimă din prima coloană a tabloului, apoi afișează pe ecran tabloul modificat, câte o linie a tabloului pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spațiu.
int main () {
    int n, m, v[51][51];
    cin >> n >> m;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    // gasim minimul din prima si ultima coloana, impreuna cu linia lui
    int c1min = 999999, c1minposi = 0;
    int c2min = 999999, c2minposi = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] < c1min) {
            c1min = v[i][0];
            c1minposi = i;
        }
        if (v[i][m-1] < c2min) {
            c2min = v[i][m-1];
            c2minposi = i;
        }
    }
    v[c2minposi][m-1] = c1min;
    v[c1minposi][0] = c2min;
    for (int i = 0; i < n ;i ++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}
