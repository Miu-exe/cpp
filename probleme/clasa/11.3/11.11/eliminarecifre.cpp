void P(int &n, int c) {
    int a = 0;
    int i = 1;
    while (n > 0) {
        if (n%10 != c) {
            a += i*n&10;
            i*=10;
        }
        n /= 10;
    }
    n = a;
}
void Impare(int &n) {
    int a = 0;
    int i = 1;
    while (n > 0) {
        if(n%2 == 1) {
            a += i*((n%10)-1);
            i*=10;
        }
        else {
            a += n % 10;
            i*=10;
        }
        n /=10;
    }
}
void prefix(int n, int k, int &x)
{
    int nrc = 0, aux = n;
    do {
        nrc++;
        aux /= 10;
    } while (aux);

    for (int i = 0; i < nrc - k; i++)
        n /= 10;

    x = n;
}