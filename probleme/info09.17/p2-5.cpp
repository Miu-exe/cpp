#include <iostream>
using namespace std;
int main () {
    int n, v[1001];
    cin >> n;
    //Să se insereze media aritmetică a oricăror două elemente vecine între cele două
    //elemente respective din vector.
    //! asuming nu iei in considerare medile ca si element
    for (int i = 0; i< n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i+= 2) {
        for (int j = n - 1; j >= i + 1; j--) {
            v[j + 1] = v[j];
        }
        v[i+1] = (v[i] + v[i + 2]) / 2;
        n++;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i]<< " ";
    }
}

//1234
