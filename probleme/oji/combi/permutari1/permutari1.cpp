#include <fstream>
#include <iostream>
using namespace std;
ifstream in ("permutari1.in");
ofstream out ("permutari1.out");

bool isxinarray(int x, int v[], int k) {
    for (int i = 0; i < k; i++) {
        if (v[i] == x) {
            return false;
        }
    }
    return true;
}
void perm(int n, int sol[], int pos) {
    if (pos < n) {
        for (int i = n; i >= 1; i--) {
            int cand = i;
            if (pos == 0) {
                sol[pos] = cand;
                perm (n, sol, pos+1);
            }
            else {
                if (isxinarray(cand, sol, pos)) {
                    sol[pos] = cand;
                    perm (n, sol, pos+1);
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            out << sol[i] << " ";
            //cout << sol[i] << " ";
        }
        out << "\n";
        //cout << "goo \n";
    }
}
int main () {
    int x;
    int soll[9] = {0};
    in >> x;
    perm(x,soll,0);
    return 0;
}