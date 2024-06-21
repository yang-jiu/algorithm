#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	int num;
	stack<int> arr;
	long long sum = 0;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			arr.pop();
		}
		else {
			arr.push(num);
		}
	}

	while(arr.size()) {
		sum += arr.top();
		arr.pop();
	}
	
	cout << sum;
}