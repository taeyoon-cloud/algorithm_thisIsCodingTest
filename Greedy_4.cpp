// 1�� �� ������_Greedy
#include <iostream>
using namespace std;

int n, k;
int answer;
int temp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);
	
	cin >> n >> k;
	

	while (n > 1) {

		if (n < k) { //�������� n�� k���� ���� ��쿡�� 1���� ���ϸ� ����
			answer += n - 1;
			break;
		}

		temp = n % k; // k�� ������ ������ ����
		n -= temp;
		answer += temp;

		if (n % k == 0){ // k�� ������������ �� �� k�� ������
			n /= k;
			answer += 1;
		}
	}


	cout << answer << endl;

	return 0;
	
}