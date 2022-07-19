// �ս��� ����Ʈ_Implementation
#include <iostream>
#include <string>
using namespace std;

string position; // ����Ʈ�� ��ġ
string row_arr = "abcdefgh";
int moving[8][2] = { {-2, 1},{-2, -1}, {2, 1}, {2, -1}, {1, 2}, {-1, 2}, {1, -2}, {-1, -2} }; // ������ �� �ִ� ���
int cnt; // ������ �� �ִ� ����� ���� ��

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> position;

	int row = row_arr.find(position[0]) + 1;
	int col = position[1] - '0'; // char to int

	for (int i = 0; i < 8; i++) {
		int temp_row = row + moving[i][0];
		int temp_col = col + moving[i][1];
		
		if (temp_row > 8 || temp_row < 1 || temp_col > 8 || temp_col < 1)
			continue;
		cnt++;
	}

	cout << cnt << endl;
	
	return 0;

	
}