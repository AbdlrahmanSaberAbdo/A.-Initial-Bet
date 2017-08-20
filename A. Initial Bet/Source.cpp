#include<iostream>
using namespace std;
int main() {

	int c1, c2, c3, c4, c5, b = 0;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	b = c1 + c2 + c3 + c4 + c5;
	if (b == 0) {
		cout << "-1" << endl;
	}
	else if (b % 5 == 0) {
		cout <<b/5<< endl;
	}
	else {
		cout << "-1" << endl;
	}
	system("pause");
	return 0;
}