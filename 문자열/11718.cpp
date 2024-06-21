#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string S;

	while (1) {
		getline(cin, S);
		if (S == "") break;

		cout << S << endl;
	}
	

}