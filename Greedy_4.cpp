// Greedy_4 <1�� �ɶ�����>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int count = 0;
	while (true) {
		// n�� k�� �������������� ���� ����
		int target = (n / k) * k;
		count += (n - target);
		n = target;
		// n�� k���� �۾Ƽ� �� ������ ���� ��� �ݺ��� ����
		if (n < k) break;
		//n�� k�� ����
		n /= k;
		count++;
	}
	// ������ ���� ���� ���� 1�� ����
	count += (n - 1);
	cout << count << endl;
	return 0;
}