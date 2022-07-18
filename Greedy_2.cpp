// ū ���� ��Ģ - Greedy
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, K;
//N :�迭 ����, M: �迭 ���ϴ� Ƚ��, K: �迭�� Ư�� �ε����� �����ؼ� ������ �� �ִ� Ƚ���� �ִ�
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

	sort(v.begin(), v.end()); // v ����

	int first = v[N-1]; // �ִ�
	int second = v[N-2]; // �� ���� �ִ�

	int cnt_first = M / (K + 1) * K + M % (K + 1); // first�� �������� Ƚ��
	answer = first * cnt_first + second * (M - cnt_first);

	cout << answer << endl;

}				  