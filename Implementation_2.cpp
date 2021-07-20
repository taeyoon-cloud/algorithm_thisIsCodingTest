// Implementation_2 <시각>
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < 60; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k <= n; k++) {
				string time = to_string(i) + to_string(j) + to_string(k);
				if (time.find("3") != string::npos) // 찾는 문자(3)가 없을 경우 string::npos 리턴
					count++;
			}
		}
	}
	
	cout << count << endl;
	return 0;
}