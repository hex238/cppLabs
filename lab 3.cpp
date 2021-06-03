#include <iostream>
using namespace std;

int main()
{
	int index = -1;
	char s;
	cin >> s;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == s) {
			index = i;
			break;
		}
	}
	if (index >= 0) {
		cout << "Found in " << index;
	}
	else {
		cout << "Not found";
	}
	return 0;
}