// ���� ī�� ����_Greedy
#include <iostream>
#include <algorithm>
using namespace std;

int row, col;
int answer;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> row >> col;

	for (int i = 0; i < row; i++) {
		int min_value = 10001; // �� ���ڰ� 1 �̻� 10000 �����̹Ƿ�
		for (int j = 0; j < col; j++) {
			int num;
			cin >> num;
			min_value = min(num, min_value);
		}
		
		answer = max(min_value, answer);
	}

	cout << answer << endl;

	return 0;
}