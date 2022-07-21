// ����� ����Ա�_DFS&BFS
#include <iostream>
#include <vector>
using namespace std;

int arr[1000][1000]; // ���� Ʋ
int dx[4] = { 0, 0, 1, -1 }; // ��,��
int dy[4] = { 1, -1, 0, 0 }; // ��, �Ʒ�
int n, m; // ����, ���� ����
int nx, ny;
int cnt; // ���̽�ũ�� ����

void dfs(int x, int y) {
	arr[x][y] = 1; // �湮 ó��

	for (int i = 0; i < 4; i++) { // ��, ��, ��, �Ʒ� 4��
		nx = x + dx[i];
		ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m) // ���� Ʋ ���� �ȿ� �ִ� ��쿡��
			if (arr[nx][ny] == 0) { // �湮���� ���� ĭ �� ���
				dfs(nx, ny); // �� ĭ�� dfs
			}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &arr[i][j]); // ���� ���� �Է¹ޱ� ����
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) { // ���� �湮���� ���� ĭ�� �ִٸ�
				dfs(i, j); // �� ĭ����  dfs
				cnt++; // �� ĭ���� ���̽�ũ�� 1���� �������
			}
		}
	}

	cout << cnt << endl;
	return 0;
}