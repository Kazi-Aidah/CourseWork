// input lowercase alphabet, get uppercase & vice versa
#include<stdio.h>
#include<ctype.h>
int main() {
	char c;
	
	scanf("%c", &c);
	if(isupper(c)) {
		c = tolower(c);
	} 
	
	else(islower(c)); {
		c = toupper(c);
	}
	
	printf("%c", c);
	
	return 0;
}