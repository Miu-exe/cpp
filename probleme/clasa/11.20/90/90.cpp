#include <fstream>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    // 94 95
    ifstream in("vocmax.in");
    ofstream out("vocmax.out");
    int n;
    in >> n;
    int maxindice = -1;
    char maxindicestring[256];
    for (int i = 0; i < n; i++) {
        char s[256];
        in.getline(s,255);
        //s[0] = \n == char s[];
        int t = 0;
        int a = strlen(s);
        for (int j = 0; j < a; j++) {
            if (strchr("aeiuo",s[j])) {
            t++;
        }
        
        }
        //cout << s << endl;
        if (t > maxindice) {
            strcpy (maxindicestring, s); /// vezi putulica ca maxindicestring = s nu merge
            maxindice = t;
        }
        //int test = 1;
    }
    out << maxindicestring;
}