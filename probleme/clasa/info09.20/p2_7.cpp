//P2.7 (Exersare): Să se determine câte linii din matrice au suma elementelor egală cu un număr X dat.
#include <iostream>
using namespace std;
int main() {
	int n, m;
	static int v[1001][1001];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	long long x;
	cin >> x;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		long long s = 0;
		for (int j = 0; j < m; j++) {
			s += v[i][j];
		}
		if (s == x) {
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
