S1;
1 - b
2 - c
3 - b
S2;
1 - suma diagonalei principale s= 14
2 - afiseze "4 7 10 13"
S3;
1 
int main() {
    int n, m, s=0;
    for (int i = 0; i <n; i++) {
        for (int j = 0 ; j <m; j++) {
            int x;
            cin >> x;
            if (x > 0) {
                s+=x;
            }
        }
    }
    cout << x;
}
2
int main () {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (i > j) {
                if (x %2 ==0) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}