#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int max_value;
	for (int i = 0; i < n; i++) {
		int min_value = 10001;
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			min_value = min(min_value, x);
		}
		max_value = max(max_value, min_value);
	}

	cout << max_value << endl;
	return 0;

}