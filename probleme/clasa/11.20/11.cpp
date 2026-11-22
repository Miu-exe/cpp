#include <iostream> 
#include <cstring>
using namespace std;
int main() {
    char s[21];
    cin >> s;
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        if (strchr("aeiuo",s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
}