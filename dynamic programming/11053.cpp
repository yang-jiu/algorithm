#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int answer = 1;
	int numlist[1001];
	int dp[1001];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> numlist[i];
	}
	
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (numlist[j] < numlist[i]) {
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (dp[i] > answer) {
			answer = dp[i];
		}
	}

	cout << answer;
	
	return 0;
}