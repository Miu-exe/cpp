#include <fstream>
#include <cstring>
using namespace std;

ifstream cin ("palindrom.in");
ofstream cout ("palindrom.out");

int main() {
    int n;
    char s[255];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        bool t = true;
        int a = strlen(s) - 1;
        int b = 0;
        while (a > b) {
            if(s[a]!=s[b]) {
                t = false;
                break;
                
            }
            a--;
            b++;
        }
        if(t) cout  << "1\n";
        else cout << "0\n";
        
    }
    return 0;
}