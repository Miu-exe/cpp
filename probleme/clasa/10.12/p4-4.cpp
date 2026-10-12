#include <iostream>
#include <cmath> // Required for std::abs
using namespace std;
int main () {
    int n, x[100][100] ={0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            x[i][j] = abs(i-j);
        }
    }
    for (int i = 0 ; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << x[i][j] << " ";
        }
        cout << "/n";
    }
}