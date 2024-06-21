#include <iostream>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;
	int i;

	cin >> S;
	cin >> i;

	cout << S[i-1];
}
