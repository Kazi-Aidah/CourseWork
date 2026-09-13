#include<stdio.h>
#include<string.h>
int main() {
	int d; char name[100];
	
	// input weekday number, it print weekday name
	printf("Input day number: ");
	scanf("%d", &d);
	switch (d) {
		case 1: printf("sunday\n"); break;
		case 2: printf("monday\n"); break;
		case 3: printf("tuesday\n"); break;
		case 4: printf("wednesday\n"); break;
		case 5: printf("thursday\n"); break;
		case 6: printf("friday\n"); break;
		case 7: printf("saturday\n"); break;
		default: printf("invalid weekday\n"); break;
	}
	
	// input weekday name, it print weekday number. 
	// Here, if/else is required cause switch can only work with int and chars.
	printf("Input day name: ");
	scanf("%s", &name);
	
	if(strcmp(name, "sunday") == 0 || strcmp(name, "sun") == 0) { printf("1\n"); }
	else if(strcmp(name, "monday") == 0 || strcmp(name, "mon") == 0) { printf("2\n"); }
	else if(strcmp(name, "tuesday") == 0 || strcmp(name, "tue") == 0) { printf("3\n"); }
	else if(strcmp(name, "wednesday") == 0 || strcmp(name, "wed") == 0) { printf("4\n"); }	
	else if(strcmp(name, "thursday") == 0 || strcmp(name, "thu") == 0) { printf("5\n"); }
	else if(strcmp(name, "friday") == 0 || strcmp(name, "fri") == 0) { printf("6\n"); }
	else if(strcmp(name, "saturday") == 0 || strcmp(name, "sat") == 0) { printf("7\n"); }
	else { printf("invalid weekday name"); }
	return 0;
}