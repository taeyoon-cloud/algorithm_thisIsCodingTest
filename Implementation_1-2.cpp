// �ð�_Implementation
#include <iostream>
#include <string>
using namespace std;

int cnt; // 3�� �ϳ��� ���ԵǴ� Ƚ��
int n; // �ð� N
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	for (int hour = 0; hour <= n; hour++) {
		for (int minute = 0; minute < 60; minute++) {
			for (int second = 0; second < 60; second++) {
				string time = to_string(hour) + to_string(minute) + to_string(second);
				if (time.find("3") != string::npos) // ���� time�� 3�� ���� ��쿡�� string::npos�� ���ϵȴ�.
					cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}