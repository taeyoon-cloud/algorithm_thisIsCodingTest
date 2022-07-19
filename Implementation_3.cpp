// 게임 개발_Implementation
#include <iostream>
using namespace std;

//북, 동, 남, 서
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int arr[50][50];
int n, m; // 입력받을 가로, 세로 크기
int x, y, direction; // 캐릭터 초기 위치, 방향
int cnt = 1; // 캐릭터가 방문한 칸의 수
int turn_time = 0; // 해당 칸에서 보는 방향을 바꾼 횟수

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
	arr[y][x] = -1; // 현재 좌표 방문 처리
	
	while (true) {
		turn_left(); // 현재 방향을 기준으로 왼쪽 방향부터 차례대로 갈 곳을 고르기 때문에
		int nx = x + dx[direction];
		int ny = y + dy[direction];
		if (arr[ny][nx] == 0) {//이동한 곳이 육지이고, 방문하지 않은 곳이라면 진짜 이동
			x = nx;
			y = ny;
			
			arr[ny][nx] = -1; // 방문한 육지는 -1로 바꿔줌

			cnt++; // cnt는 새로운 칸으로 이동했을 때만 증가시켜준다.
			turn_time = 0;
			continue; // 이동했을 경우에는 cnt를 증가시키고 turn_time을 0으로 초기화 한후 다시 while문 꼭대기로 가서 이동할 방향을 찾는다.
		}
		
		else turn_time++; // 실제 이동 안했을 경우에는 그냥 도는 횟수만 증가

		if (turn_time == 4) { // 만약 네 방향 모두 가본 칸이거나 바다로 되어 있는 칸인 경우
			nx = x - dx[direction]; // 뒤로 가야함 -> 빼줌
			ny = y - dy[direction];

			if (arr[ny][nx] == 1) // 만약 이동한 뒤쪽 방향이 바다라면 움직임을 멈춰야함
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