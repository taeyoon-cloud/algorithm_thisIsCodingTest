// Greedy_4 <1이 될때까지>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	while (true) {
		// n이 k로 나눠질때까지의 값을 빼줌
		int target = (n / k) * k;
		count += (n - target);
		n = target;
		// n이 k보다 작아서 더 나눌수 없을 경우 반복문 종료
		if (n < k) break;
		//n을 k로 나눔
		n /= k;
		count++;
	}
	// 마지막 남은 수에 대해 1씩 빼줌
	count += (n - 1);
	cout << count << endl;
	return 0;
}