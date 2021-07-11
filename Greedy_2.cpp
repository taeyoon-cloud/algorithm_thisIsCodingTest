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
	sort(arr, arr + n, compare); // c++ STL 이용해서 내림차순 정렬
	
	int first = arr[0]; // 첫번째로 큰 수
	int second = arr[1]; // 두번째로 큰 수


	//for (int i = 0; i < n; i++)
		//cout << arr[i];

	int sum = 0; // 총합
	int temp_k = k;
	while (true) {
		sum += first;
		m--;
		temp_k--;
		if (temp_k == 0) { // temp_k가 0이 될 경우 second를 더하고 temp_k를 다시 k로 선언
			sum += second;
			m--;
			temp_k = k;
		}
		if (m == 0) // m == 0일경우 while문 탈출
			break;
	}

	cout << sum << endl;
	return 0;
	

}