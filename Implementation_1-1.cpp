// 상하좌우_Implementation
#include <iostream>
#include <string>
using namespace std;

int n; // 공간의 크기
string plans; // 명령을 저장할 string
int start_x = 1; // 시작 x좌표
int start_y = 1; // 시작 y좌표


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cin.ignore(); // 버퍼 비우기
	getline(cin, plans); // 한 줄을 plans string에 입력

	for (int i = 0; i < plans.length(); i++) {
		char input = plans[i];

		if (input == 'U') {
			if(start_y > 1)
				start_y -= 1;
		}
		if (input == 'D') {
			if(start_y < n)
				start_y += 1;
		}
		if (input == 'R') {
			if (start_x < n)
				start_x += 1;
		}
		if (input == 'L') {
			if (start_x > 1)
				start_x -= 1;
		}
	}

	cout << start_y << " " << start_x << endl;

	return 0;
}