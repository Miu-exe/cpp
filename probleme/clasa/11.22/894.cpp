#include <iostream>
using namespace std;

void cifminmax(int n, int &mini, int &maxi) {
    mini = 9;
    maxi = 0;
    do {
        int c = n % 10;
        if (c < mini) mini = c;
        if (c > maxi) maxi = c;
        n /= 10;
    } while (n > 0);
}

int main() {
    int n, mi, ma;
    cin >> n;
    cifminmax(n, mi, ma);
    cout << mi << " " << ma;
    return 0;
}
