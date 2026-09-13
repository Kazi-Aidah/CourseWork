#include<stdio.h>
#include <ctype.h>
int main() {
	char c;

	scanf("%c", &c);

	switch (tolower(c)) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("Vowel");
		break;

	default:
		printf("consonant");
	}

	return 0;
}