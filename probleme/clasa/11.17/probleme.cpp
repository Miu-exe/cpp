int multiplu(int a[], int n, int k)
{
    int nr = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            if (a[i] == 0)
                nr++;
        }
        else if (a[i] % k == 0 && a[i] % 10 == k)
            nr++;
    }
    return nr;
}

int suma(int v[], int n, int i, int j)
{
    int s = 0;
    for (int k = 1; k <= n; k++)
        if (k < i || k > j)
            s += v[k];
    return s;
}

int count(double a[], int n)
{
    double s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];

    double media = s / n;

    int nr = 0;
    for (int i = 0; i < n; i++)
        if (a[i] >= media)
            nr++;

    return nr;
}

int FGreater(int a[], int n, int x)
{
    int rez = -1;
    for (int i = 0; i < n; i++)
        if (a[i] > x && (rez == -1 || a[i] < rez))
            rez = a[i];
    return rez;
}

void ordonare(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
}

void ordonare1(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
}

void ordonare(int a[], int n, int st, int dr)
{
    for (int i = st; i < dr; i++)
        for (int j = i + 1; j <= dr; j++)
            if (a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
}

void sterge(int a[], int &n, int st, int dr)
{
    int k = dr - st + 1;
    for (int i = dr + 1; i < n; i++)
        a[i - k] = a[i];
    n = n - k;
}

void ordon123(int n, int a[])
{
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
            c1++;
        else if (a[i] == 2)
            c2++;
        else
            c3++;

    int k = 0;
    while (c1--)
        a[k++] = 1;
    while (c2--)
        a[k++] = 2;
    while (c3--)
        a[k++] = 3;
}

int CautaPoz(int a[], int n)
{
    long long total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];

    long long s = 0, best = -1;
    int p = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s += a[i];
        long long dif = 2 * s - total;
        if (dif < 0)
            dif = -dif;
        if (best == -1 || dif < best)
        {
            best = dif;
            p = i;
        }
    }
    return p;
}

