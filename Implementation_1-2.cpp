// 시각_Implementation
#include <iostream>
#include <string>
using namespace std;

int cnt; // 3이 하나라도 포함되는 횟수
int n; // 시간 N
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for (int hour = 0; hour <= n; hour++) {
		for (int minute = 0; minute < 60; minute++) {
			for (int second = 0; second < 60; second++) {
				string time = to_string(hour) + to_string(minute) + to_string(second);
				if (time.find("3") != string::npos) // 만약 time에 3이 없을 경우에는 string::npos가 리턴된다.
					cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}