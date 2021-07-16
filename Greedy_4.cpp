#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	while (true) {
		if (n % k == 0) {
			n /= k;
			count++;
		}
		else {
			n--;
			count++;
		}
		if (n == 1)
			break;
	}

	cout << count << endl;
	return 0;
}