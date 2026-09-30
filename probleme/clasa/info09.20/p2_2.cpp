#include <iostream>
using namespace std;
//vector v[i] cu nr de element pare de pe fiecare linie
int main() {
	int n,m, v[1001] = {0};
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			if (x%2==0) {
				v[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
