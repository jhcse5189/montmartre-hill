#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	
	for (int i = 0; i < s.size(); i++) {
		if (s[i] > 'C')
			s[i] -= 3;
		else
			s[i] -= (2 - ('Z' - 'A'));
	}
	
	cout << s << endl;
	
	return 0;
}
