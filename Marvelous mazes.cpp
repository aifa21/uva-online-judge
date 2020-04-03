#include <bits/stdc++.h>

using namespace std;
int main () {
	char c;
	int ct = 0;
	int i;

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			ct += c - 48;
		} else if (c == 'b') {
			for (i = 0; i < ct; i++)
				cout << ' ';
			ct = 0;
		} else if (c == '!') {
			cout << endl;
		}
		//else if (c == '\n') {
			//cout << c;
		//}
		 else {
			for (i = 0; i < ct ;i++)
				cout << c;
			ct = 0;
		}
	}

	return 0;
}
