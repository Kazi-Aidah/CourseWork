// problem: https://toph.co/p/passwords

/* input            output
hello1World2X         2
aBAb222abD32Gggp      3
aasdafsdfDSF          0
*/   

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	string s;

	while(cin >> s) {
		int password_count = 0;

		bool smol = false, capi = false, num = false;

		// range based loop:
		// take every character of string s as ch
		for(char ch : s) {
			if(ch >= 'a' && ch <= 'z') {
				smol = true;
			} else if(ch >= 'A' && ch <= 'Z') {
				capi = true;
			} else if(ch >= '0' && ch <= '9') {
				num = true;
			}

			if(smol && capi && num) {
				password_count++;
				smol = false;
				capi = false;
				num = false;
			}
		}

		cout << password_count << endl;

	}

	return 0;
}
