//P2.3 (Exersare): Să se ordoneze crescător elementele de pe o linie k dată, fără a modifica celelalte linii ale
//matricei.
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, m;
	static int v[1001][1001];
	cin >> n >> m;
	for (int i =0; i < n; i++) {
		for (int j =0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	int k;
	cin >> k;
	sort(v[k], v[k] + m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

