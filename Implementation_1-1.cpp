// �����¿�_Implementation
#include <iostream>
#include <string>
using namespace std;

int n; // ������ ũ��
string plans; // ����� ������ string
int start_x = 1; // ���� x��ǥ
int start_y = 1; // ���� y��ǥ


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	cin.ignore(); // ���� ����
	getline(cin, plans); // �� ���� plans string�� �Է�

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