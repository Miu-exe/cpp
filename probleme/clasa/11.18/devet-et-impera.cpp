#include <iostream>
using namespace std;

int NrXDivImp(int a[], int st, int dr, int x) {
    int s;
    if (st == dr) {
        //
        if (a[st] == x) {
            return 1;
        }
        else return 0;
    }
    else {
        // 2 7 , 2 3 ,4 ,5,6,7
        int mij =(dr - st+1) / 2;
        
        s = NrXDivImp(a, st, mij, x) + NrXDivImp(a, mij+1, dr, x);
    }
    //
    return s;
}

int main() {
    int n, st,dr,x;
    int a[] = {2,5,1,5,3,5,5,5,7,6};
    n = 10;
    st = 1;
    dr = 6;
    x = 5;
    cout << NrXDivImp(a,st,dr,x);
}