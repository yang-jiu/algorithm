#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M = 0;
	cin >> N >> M;
	vector<int> arr(N, 0);

	int i, j, k = 0;

	for (int l = 0; l < M; l++) {
		cin >> i >> j >> k;

		for (int z = i - 1; z < j; z++) {
			arr[z] = k;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << ' ';
	}


}