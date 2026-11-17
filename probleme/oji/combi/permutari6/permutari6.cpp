#include <algorithm>
#include <iostream>
using namespace std;
//ifstream in ("permutari6.in");
//ofstream out ("permutari6.out");
int v[9];

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
        for (int i = 0; i < n; i++) {
            int cand = v[i];
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
            cout << sol[i] << " ";
            //cout << sol[i] << " ";
        }
        cout << "\n";
        //cout << "goo \n";
    }
}

int main () {
    int x,a,b;
    int soll[9];
    cin >> a >> b;
    x = b-a + 1;
    for (int i =0; a <= b; i++) {
        v[i] = a;
        a++;
    }
    
    
    //sort(v, v + x);
    perm(x,soll,0);
    return 0;
}
