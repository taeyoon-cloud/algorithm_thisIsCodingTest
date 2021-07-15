#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> min_v; // 각 행에서의 최솟값을 저장하는 벡터
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		vector<int> v; // 각 행의 값들을 저장하는 벡터
		for (int j = 0; j < m; j++) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end()); // v벡터를 오름차순으로 정렬
		min_v.push_back(v[0]); // 각 행에서의 최솟값만 min_v 벡터에 입력
	}
	int max = *max_element(min_v.begin(), min_v.end());
	// min_v 벡터의 최댓값 선언

	cout << max << endl;

	return 0;
	
}