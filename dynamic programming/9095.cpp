#include <iostream>
using namespace std;

int main() {
	int T;
	int num;
	int dp[11];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> num;

		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;

		for (int j = 3; j < num + 1; j++) {
			dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
		}

		cout << dp[num] << endl;
	}

}