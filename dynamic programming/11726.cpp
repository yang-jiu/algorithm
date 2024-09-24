#include <iostream>
using namespace std;

int main() {
	int N;
	int dp[1001];

	cin >> N;

	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i < N+1; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
	}

	cout << dp[N];

	return 0;

}