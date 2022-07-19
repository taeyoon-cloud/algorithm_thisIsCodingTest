// ���� ����_Implementation
#include <iostream>
using namespace std;

//��, ��, ��, ��
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int arr[50][50];
int n, m; // �Է¹��� ����, ���� ũ��
int x, y, direction; // ĳ���� �ʱ� ��ġ, ����
int cnt = 1; // ĳ���Ͱ� �湮�� ĭ�� ��
int turn_time = 0; // �ش� ĭ���� ���� ������ �ٲ� Ƚ��

void turn_left() {
	direction--;
	if (direction == -1)
		direction = 3;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	cin >> x >> y >> direction;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	arr[y][x] = -1; // ���� ��ǥ �湮 ó��
	
	while (true) {
		turn_left(); // ���� ������ �������� ���� ������� ���ʴ�� �� ���� ���� ������
		int nx = x + dx[direction];
		int ny = y + dy[direction];
		if (arr[ny][nx] == 0) {//�̵��� ���� �����̰�, �湮���� ���� ���̶�� ��¥ �̵�
			x = nx;
			y = ny;
			
			arr[ny][nx] = -1; // �湮�� ������ -1�� �ٲ���

			cnt++; // cnt�� ���ο� ĭ���� �̵����� ���� ���������ش�.
			turn_time = 0;
			continue; // �̵����� ��쿡�� cnt�� ������Ű�� turn_time�� 0���� �ʱ�ȭ ���� �ٽ� while�� ������ ���� �̵��� ������ ã�´�.
		}
		
		else turn_time++; // ���� �̵� ������ ��쿡�� �׳� ���� Ƚ���� ����

		if (turn_time == 4) { // ���� �� ���� ��� ���� ĭ�̰ų� �ٴٷ� �Ǿ� �ִ� ĭ�� ���
			nx = x - dx[direction]; // �ڷ� ������ -> ����
			ny = y - dy[direction];

			if (arr[ny][nx] == 1) // ���� �̵��� ���� ������ �ٴٶ�� �������� �������
				break;

			else {
				x = nx;
				y = ny;
				turn_time = 0;
			}
		}
		cout << cnt << endl;
	}

	cout << cnt << endl;
}