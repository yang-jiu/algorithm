#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string S;
	vector<int> count(26, -1);

	cin >> S;

	for (char i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < S.length(); j++) {
			if (S[j] == i) {
				count[i-97] = j;
				break;
			}
		}
	}

	for (int i = 0; i < count.size(); i++) {
		cout << count[i] << ' ';
	}
}
