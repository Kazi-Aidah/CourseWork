// input = 6+5+7
// output = asc: 5+6+7, desc: 7+6+5

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string s;
	cout << "Enter numbers along with +: " << endl;
	cin >> s;

	// remove or ignore +
	s.erase(remove(s.begin(), s.end(), '+'), s.end());

	// ascending order sort
	string asc = s;
	sort(asc.begin(), asc.end());
	
	for(int i = 0; i < asc.length(); i++) {
		cout << asc[i];
		if(i != asc.length() - 1) {
			cout << '+';
		}
	}

	cout << endl;

	string desc = s;
	sort(desc.begin(), desc.end());
	reverse(desc.begin(), desc.end());
	// cout << desc << endl; // 765

	for(int i = 0; i < desc.length(); i++) {
		cout << desc[i];
		if(i != desc.length() - 1) {
			cout << '+';
		}
	}
	
	return 0;
}

// success :D --- 2:16AM
