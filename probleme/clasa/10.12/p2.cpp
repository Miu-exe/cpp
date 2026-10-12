//se citeste n sa se generela matricea paratacia n xn in care a[i][j] = min(i,j)
#include <algorithm>
#include <iostream>
using namespace std;
int main () {
    int n, v[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0;  j < n; j++) {
            v[i][j] = min(i,j);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0;  j < n; j++) {
            cout << v[i][j]<< " ";
        }
        cout << "/n";
    }
}