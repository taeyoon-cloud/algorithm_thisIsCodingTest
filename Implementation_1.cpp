// Implementation_1 <�����¿�>
#include <iostream>

using namespace std;

int main() {
	int x = 1; // �ʱ� x��ǥ
	int y = 1; // �ʱ� y��ǥ
	int n; // ����� ����
	cin >> n;

	char command;
	do {
		int nx = x;
		int ny = y;
		cin >> command;
		if (command == 'L') {
			ny--;

		}
		else if (command == 'R') {
			ny++;
		}
		else if (command == 'U') {
			nx--;
		}
		else if (command == 'D') {
			nx++;
		}
		if (nx < 1 || ny < 1 || nx > n || ny > n)
			continue;
		x = nx;
		y = ny;
	} while (getc(stdin) == ' ');
	
	cout << x <<" "<< y << endl;
	return 0;
}