#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("triang.in");
ofstream cout("triang.out");
long long factorial(int n) { //effec factorial
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    long long s = 1;
    cin >> n;
    if (n == 1) {
        cout << 0;
        return 0;
    }
    if (n == 2) {
        cout << 1;
        return 0;
    }
    //soo acording wo wikipaedia
    /* este formula pentru a triangula orice poligon convex in timp linia care sta in urmatorul mod
    avem n nr de varfuri si s care ii nr cautat
    avem formula s = (n(n+1)(n+2)..(2n-4)) / (n-2)!*/
    /// keep in mind about nr lui catalan
    for (int i = n; i < (2*n)-3; i++) {
        s *= i;
    }
    //n -= 2;
    s /= factorial((n-2));
    cout << s;
    return 0;
}