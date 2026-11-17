#include <algorithm>
#include <fstream>
using namespace std;
ifstream in ("sirpie.in");
ofstream out ("sirpie.out");
int v[10];

bool isxinarray(int x, int v[], int k) {
    for (int i = 0; i < k; i++) {
        if (v[i] == x) {
            return false;
        }
    }
    return true;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % temp;
        a = temp;
    }
    return a;
}
bool primeintereele(int a, int b) {
    return gcd(a,b) == 1;
}
void perm(int n, int sol[], int pos) {
    if (pos < n) {
        for (int i = 0; i < n; i++) {
            int cand = v[i];
            if (pos == 0) {
                sol[pos] = cand;
                perm (n, sol, pos+1);
            }
            else {
                if (primeintereele(cand, sol[pos-1])&&isxinarray(cand,sol,pos)) {
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
    int soll[9];
    in >> x;
    for (int i = 0; i < x; i++) {
        in >> v[i];
    }
    
    sort(v, v + x);
    perm(x,soll,0);
    return 0;
}