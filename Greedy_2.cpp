#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;

bool compare(int i, int j) { // sort()함수로 오름차순 정렬하기 위한 함수
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
	sort(v.begin(), v.end(), compare); // c++ STL 이용해서 내림차순 정렬

	int first = v[0]; // 첫번째로 큰 수
	int second = v[1]; // 두번째로 큰 수


					   //for (int i = 0; i < n; i++)
					   //cout << arr[i];

	int count = (m / (k + 1)) * k + m % (k + 1);
	// 가장 큰 수가 나오는 횟수
	int sum = count * first + (m - count) * second;

	cout << sum << endl;
	return 0;


}