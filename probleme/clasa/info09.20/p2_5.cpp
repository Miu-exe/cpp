#include <iostream>
using namespace std;
//P2.5 (Exersare): Să se găsească valoarea maximă de pe fiecare coloană și să se afișeze sub formă de
//vector.
int main () {
	int n, m;
	static int v[1001][1001];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		int mx = v[0][j];
		for (int i = 1; i < n; i++) {
			if (v[i][j] > mx) {
				mx = v[i][j];
			}
		}
		cout << mx << " ";
	}
	cout << "\n";
	return 0;
}
