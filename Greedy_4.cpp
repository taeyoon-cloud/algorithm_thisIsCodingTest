// 1이 될 때까지_Greedy
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

		if (n < k) { //마지막에 n이 k보다 작은 경우에는 1까지 더하면 끝남
			answer += n - 1;
			break;
		}

		temp = n % k; // k로 나눠질 때까지 빼줌
		n -= temp;
		answer += temp;

		if (n % k == 0){ // k로 나눠질때까지 뺀 후 k로 나눠줌
			n /= k;
			answer += 1;
		}
	}


	cout << answer << endl;

	return 0;
	
}