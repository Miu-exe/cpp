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
    if (n < 3) {
        cout << 0;
        return 0;
    }
    if (n == 3) {
        cout << 1 <<"\n";
        return 0;
    }
    
    long long p1 = 1;
    for (int i = n; i <= (2*n-4); i++) {
        p1 *= i;
    }
    cout << p1 << endl;
    int result = p1 / factorial(n-2);
    cout << result;
    return 0;
}