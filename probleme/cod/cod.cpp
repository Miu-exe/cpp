#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    ifstream in("cod.in");
    ofstream out("cod.out");
    // n,m;
    //getline(in,n);
    //getline(in,m);
    std::vector<int> a, b;
    char c;

    while (in.get(c) && c != '\n')
        a.push_back(c - '0');

    while (in.get(c) && c != '\n')
        b.push_back(c - '0');

    int n = a.size();
    int m = b.size();
for (int i = n - 1; i >= 0; i--) {
    int x = a[i];
    for (int j = i - 1; j >= 0; j--) {
        if (a[j] == x) {
            a.erase(a.begin() + j);
            i--;   // shift i left since everything after j moved down by one
            j--;   // shift j too, since erase invalidated positions >= j
        }
    }
}
    n = a.size();
    m = b.size();
    int start = 0;
    for (int i = 0; i < n; i++) {
        
    }
    return 0;
    //859
    //578459 ->  
    //18754229 -> 
}