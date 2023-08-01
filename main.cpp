#include<iostream>

using namespace std;

int main() {
	char map[4][4];

	char c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> c;
			map[i][j] = c; 
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int sumh = (map[i][j] == '#') + (map[i+1][j+1] == '#') + (map[i][j+1] == '#') + (map[i+1][j] == '#');
			int sumd = (map[i][j] == '.') + (map[i+1][j+1] == '.') + (map[i][j+1] == '.') + (map[i+1][j] == '.');

			if (sumd >= 3 || sumh >= 3) {
				cout << "YES";
				return 0;
			}			
		}
	}

	cout << "NO";
	return 0;
}
