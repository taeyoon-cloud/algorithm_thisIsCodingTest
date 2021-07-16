// Greedy_1 <°Å½º¸§µ·>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int coin_list[4] = { 500, 100, 50, 10 };
	int count = 0;
	for (int i = 0; i < 4; i++) {
		count += n / coin_list[i];
		n %= coin_list[i];
	}
	cout << count << endl;
	return 0;
}