#include <iostream>
#include <string>
using namespace std;

bool check(int num) {
	if (num > 0 && num < 27) {
		return true;
	}
	else {
		return false;
	}
}
int dp[5001];


int main() {
	string code;

	cin >> code;
	int n = code.size();

	string temp = code.substr(0, 1);
	if (stoi(temp) == 0) { //ù ��° ���� 0�� ���
		cout << 0;
		return 0;
	}

	if (n == 1) { //�� �ڸ� ���� ���
		cout << 1;
		return 0;
	}

	dp[0] = 1;

	temp = code.substr(0, 2); //���ڸ� ��ȣ
	string temp2 = code.substr(1, 1);  //���ڸ� ��ȣ


	if (check(stoi(temp)) && check(stoi(temp2)))  {
		dp[1] = 2;
	}
	else if(!check(stoi(temp)) && !check(stoi(temp2))){
		cout << 0;
		return 0;
	}
	else {
		dp[1] = 1;
	}
	

	for (int i = 2; i < n; i++) {
		temp = code.substr(i - 1, 2);
		temp2= code.substr(i,1);
		
		string before = code.substr(i - 1, 1);
		if (stoi(before) ==0 ) { //i-1��°�� 0�� ���
			if (check(stoi(temp2))) { //���� ���� Ȯ��
				dp[i] = dp[i - 1];
			}
			else {
				cout << 0;
				return 0;
			}
		}
		else {
			if (check(stoi(temp)) && check(stoi(temp2))) {

				dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
			}
			else if (!check(stoi(temp)) && check(stoi(temp2))) {

				dp[i] = dp[i - 1] % 1000000;
			}
			else if (check(stoi(temp)) && !check(stoi(temp2))) {

				dp[i] = dp[i - 2] % 1000000;
			}
			else {
				cout << 0;
				return 0;
			}

		}
		
	}

	cout << dp[n - 1];
	return 0;
}

