#include <iostream>
using namespace std;

void tabla(int n, int sol[][], int posi, int posj, int nrregine) {
if (posi < n && posj < n && nrregine < n) {

}
else {
    if (nrregine = n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (sol[i][j] == 2) {
                    cout << "* ";
                }
                else {
                    cout << "- ";
                }

            }
            cout << "\n";
        }
    }
}
}

int main() {
    int n;
    int tabl[10][10] = {false};
    cin >> n;
    tabla (n,tabl, 0, 0, 0 );
}