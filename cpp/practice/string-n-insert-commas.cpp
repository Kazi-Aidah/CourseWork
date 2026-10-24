#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;

	// starting from end
	// moving 3 chars left 
	// inserting ","
	// repeat
	for(int i = s.length() - 3; i > 0; i -= 3) {
		s.insert(i, ",");
	}
	
	cout << s;

	return 0;
}
