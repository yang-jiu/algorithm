#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> st; //스택
	int n = 0; //명령의 수
	string str; //명령어

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		
		if (str == "push") {
			int num;
			cin >> num;
			st.push(num);
		}
		else if (str == "pop") {
			if (st.empty()) cout << -1 << endl;
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (str == "size") {
			cout << st.size() << endl;
		}
		else if (str == "empty") {
			if (st.size() == 0) {
				cout << 1 << endl;
			}
			else { cout << 0 << endl; }
		}
		else if (str == "top") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else { cout << st.top() << endl; }
		}
	}
}