//P2.6 (Exersare): Să se interschimbe linia pe care se află elementul maxim cu linia pe care se află
//elementul minim din matrice.
#include <iostream>
#include <algorithm>
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
	int imax = 0, jmax = 0, imin = 0, jmin = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] > v[imax][jmax]) {
				imax = i;
				jmax = j;
			}
			if (v[i][j] < v[imin][jmin]) {
				imin = i;
				jmin = j;
			}
		}
	}
	for (int j = 0; j < m; j++) {
		swap(v[imax][j], v[imin][j]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
