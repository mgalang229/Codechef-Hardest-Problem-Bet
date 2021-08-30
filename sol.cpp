#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c;
		cin >> a >> b >> c;
		// smallest value = hardest problem
		if (c < b && c < a) {
			cout << "Alice";
		} else if (b < a && b < c) {
			cout << "Bob";
		} else {
			cout << "Draw";
		}
		cout << '\n';
	}
	return 0;
}
