// 큰 수의 법칙 - Greedy
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, K;
//N :배열 개수, M: 배열 더하는 횟수, K: 배열의 특정 인덱스가 연속해서 더해질 수 있는 횟수의 최댓값
vector<int> v;
int answer;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M >> K;
	
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end()); // v 정렬

	int first = v[N-1]; // 최댓값
	int second = v[N-2]; // 그 다음 최댓값

	int cnt_first = M / (K + 1) * K + M % (K + 1); // first가 더해지는 횟수
	answer = first * cnt_first + second * (M - cnt_first);

	cout << answer << endl;

}				  