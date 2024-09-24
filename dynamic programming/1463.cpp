#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N;
	int dp[100001];

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i < N + 1; i++) {
		if (dp[i] % 3 == 0) {
			dp[i] = min(dp[i - 1] + 1, dp[i / 3] + 1);
		}

		else if (dp[i] % 2 == 0) {
			dp[i] = min(dp[i - 1] + 1, dp[i / 2] + 1);
		}
		else {
			dp[i] = dp[i - 1] + 1;
		}
		
	}

	cout << dp[N];
}
