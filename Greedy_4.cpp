// 1�� �� ������_Greedy
#include <iostream>
using namespace std;

long long n, k;
long long answer;
long long temp;
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
		cout << "n: " << n << "answer: " << answer << endl;

		if (n % k == 0){ // k�� ������������ �� �� k�� ������
			n /= k;
			answer += 1;
		}
		cout << "n: " << n << "answer: " << answer << endl;
	}


	cout << answer << endl;

	return 0;
	
}