#include <iostream>
#include <vector>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	int value = 0;
	int count = 0;


	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	cin >> value;

	for (int i = 0; i < N; i++) {
		if (arr[i] == value) {
			count++;
		}
	}

	cout << count;
}