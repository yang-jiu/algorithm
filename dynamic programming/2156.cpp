#include <iostream>
#include <algorithm>
using namespace std;

//int main() {
//	int n;
//	int numlist[10000];
//	int dp[10001][2];
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> numlist[i];
//	}
//
//	dp[0][0] = numlist[0];
//	dp[0][1] = numlist[0];
//	dp[1][0] = numlist[1];
//	dp[1][1] = numlist[0]+numlist[1];
//
//	for (int i = 2; i < n; i++) {
//		for (int j = 0; j < 2; j++) {
//			if (j == 0) {
//				dp[i][j] = max(dp[i - 2][0], dp[i - 2][1]) + numlist[i];
//			}
//			else {
//				dp[i][j] = dp[i - 1][0] + numlist[i];
//			}
//		}
//	}
//
//	cout << max({ dp[n - 2][0], dp[n - 2][1], dp[n - 1][0], dp[n - 1][1] }) << endl << endl;
//	
//	for (int j = 0; j < 2; j++) {
//		for (int i = 0; i <n; i++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}


int main() {
	int n;
	int numlist[10001];
	int dp[10001];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> numlist[i];
	}

	dp[0] = numlist[0];
	dp[1] = numlist[0] + numlist[1];
	dp[2] = max({ dp[1], numlist[0] + numlist[2], numlist[1]+numlist[2] });

	for (int i = 3; i < n; i++) {
		dp[i] = max({ dp[i - 1], dp[i - 2] + numlist[i], dp[i - 3] + numlist[i - 1] + numlist[i] });
	}

	cout << dp[n - 1];
}
