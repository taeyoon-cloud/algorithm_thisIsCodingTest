#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> min_v; // �� �࿡���� �ּڰ��� �����ϴ� ����
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		vector<int> v; // �� ���� ������ �����ϴ� ����
		for (int j = 0; j < m; j++) {
			int num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end()); // v���͸� ������������ ����
		min_v.push_back(v[0]); // �� �࿡���� �ּڰ��� min_v ���Ϳ� �Է�
	}
	int max = *max_element(min_v.begin(), min_v.end());
	// min_v ������ �ִ� ����

	cout << max << endl;

	return 0;
	
}