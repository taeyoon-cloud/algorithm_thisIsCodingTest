#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;

bool compare(int i, int j) { // sort()�Լ��� �������� �����ϱ� ���� �Լ�
	return i > j;
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end(), compare); // c++ STL �̿��ؼ� �������� ����

	int first = v[0]; // ù��°�� ū ��
	int second = v[1]; // �ι�°�� ū ��


					   //for (int i = 0; i < n; i++)
					   //cout << arr[i];

	int count = (m / (k + 1)) * k + m % (k + 1);
	// ���� ū ���� ������ Ƚ��
	int sum = count * first + (m - count) * second;

	cout << sum << endl;
	return 0;


}