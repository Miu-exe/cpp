#include <iostream>
using namespace std;

int cmmdc(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, x, sus = 0, jos = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> x;
            if (i < j)
                sus += x;
            if (i > j)
                jos += x;
        }
    cout << cmmdc(sus, jos);
    return 0;
}
