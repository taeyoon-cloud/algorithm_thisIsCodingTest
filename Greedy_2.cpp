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

	int sum = 0; // ����
	int temp_k = k;
	while (true) {
		sum += first;
		m--;
		temp_k--;
		if (temp_k == 0) { // temp_k�� 0�� �� ��� second�� ���ϰ� temp_k�� �ٽ� k�� ����
			sum += second;
			m--;
			temp_k = k;
		}
		if (m == 0) // m == 0�ϰ�� while�� Ż��
			break;
	}

	cout << sum << endl;
	return 0;
	

}