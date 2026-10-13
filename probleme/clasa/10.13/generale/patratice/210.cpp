#include <fstream>
using namespace std;

ifstream fin("chenar.in");
ofstream fout("chenar.out");

int main()
{
    int n, a[23][23];
    fin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    for (int j = 0; j < n; j++)
        fout << a[0][j] << " ";
    for (int i = 1; i < n; i++)
        fout << a[i][n - 1] << " ";
    for (int j = n - 2; j >= 0; j--)
        fout << a[n - 1][j] << " ";
    for (int i = n - 2; i >= 1; i--)
        fout << a[i][0] << " ";
    return 0;
}
