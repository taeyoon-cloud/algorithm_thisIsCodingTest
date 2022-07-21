// 음료수 얼려먹기_DFS&BFS
#include <iostream>
#include <vector>
using namespace std;

int arr[1000][1000]; // 얼음 틀
int dx[4] = { 0, 0, 1, -1 }; // 좌,우
int dy[4] = { 1, -1, 0, 0 }; // 위, 아래
int n, m; // 세로, 가로 길이
int nx, ny;
int cnt; // 아이스크림 개수

void dfs(int x, int y) {
	arr[x][y] = 1; // 방문 처리

	for (int i = 0; i < 4; i++) { // 좌, 우, 위, 아래 4번
		nx = x + dx[i];
		ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m) // 얼음 틀 범위 안에 있는 경우에만
			if (arr[nx][ny] == 0) { // 방문하지 않은 칸 일 경우
				dfs(nx, ny); // 그 칸도 dfs
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
			scanf("%1d", &arr[i][j]); // 공백 없이 입력받기 위해
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) { // 만약 방문하지 않은 칸이 있다면
				dfs(i, j); // 그 칸부터  dfs
				cnt++; // 그 칸부터 아이스크림 1개가 만들어짐
			}
		}
	}

	cout << cnt << endl;
	return 0;
}