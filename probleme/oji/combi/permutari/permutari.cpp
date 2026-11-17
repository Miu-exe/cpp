#include <fstream>
using namespace std;
ifstream in ("permutari.in");
ofstream out ("permutari.out");
bool isx(int x, int v[], int k) // verifica daca elemetul x se afla in pozitile <k din vectorul v[]; 
{
    
    for (int i = 0; i < k; i++) {
        if (v[i] == x) {
            return false;
        }
    }
    return true; // daca nu este returnam adevara ca sa putem pune el in vector
}

void permutari(int n, int sol[], int pos) {
    // n nr de elemente 1,2,3,...,n, si cate elemente
    // vor fi in vectorul sol[] unde vor fi n elemente
    if (pos < n) {
        // sol nu ii inca plin;
        for (int i = 1; i <= n; i++) {
            int cand = i; // nr candidat
            if (pos == 0) {
                sol[pos] = cand;
                permutari(n, sol, pos+1);
            }
            else {
                if (isx(cand, sol, pos)) {
                    sol[pos] = cand;
                    permutari(n, sol, pos+1);
                }
                //daca nu poti sa pui mai ruleaza o data foru boss sa dai cand nou
            }
        }
    }
    else {
        // pos == k, pos e plin
        for (int i = 0; i < n; i++) {
            out << sol[i] << " ";
        }
        out <<"\n";
    }

}


int main () {
    
    int x;
    in >> x;
    int soll[10] ={0};
    permutari(x,soll, 0);
    return 0;

}