#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int i, int j) {
	return i > j;
}

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	int arr[1000];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n, compare); // c++ STL �̿��ؼ� �������� ����

	int first = arr[0]; // ù��°�� ū ��
	int second = arr[1]; // �ι�°�� ū ��


						 //for (int i = 0; i < n; i++)
						 //cout << arr[i];

	int count = (m / (k + 1)) * k + m % (k + 1);
	// ���� ū ���� ������ Ƚ��
	int sum = count * first + (m - count) * second;

	cout << sum << endl;
	return 0;


}