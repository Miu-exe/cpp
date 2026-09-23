//Se dau n numere naturale mai mici decât 1000. Să se determine valoarea cu
//frecvența maximă de apariție.
#include <iostream>
using namespace std;
int main() {
    int n, v[1001], frec[1003] = {0};
    frec[1002] = -1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        frec[v[i]]++;
    }
    int max = 1002;
    for (int i = 0; i < 1002; i++) {
        if (frec[i] > frec[max]) {
            max = i;
        }
    }
    cout << frec[max] << " "<< max;
    return 0;
}