#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	for(int i = s.length() - 1; i >= 0; i--) {
		if(s[i] == '0') cout << "O-|-OOOO\n";
		if(s[i] == '1') cout << "O-|O-OOO\n";
		if(s[i] == '2') cout << "O-|OO-OO\n";
		if(s[i] == '3') cout << "O-|OOO-O\n";
		if(s[i] == '4') cout << "O-|OOOO-\n";
		if(s[i] == '5') cout << "-O|-OOOO\n";
		if(s[i] == '6') cout << "-O|O-OOO\n";
		if(s[i] == '7') cout << "-O|OO-OO\n";
		if(s[i] == '8') cout << "-O|OOO-O\n";
		if(s[i] == '9') cout << "-O|OOOO-\n";
	}
}
