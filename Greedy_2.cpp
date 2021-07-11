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

	int count = (m / (k + 1)) * k + m % (k + 1);
	// 가장 큰 수가 나오는 횟수
	int sum = count * first + (m - count) * second;

	cout << sum << endl;
	return 0;


}