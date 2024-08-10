/*2. Any character is entered through the keyboard, write a program to determine whether the 
character Entered is a capital letter, a small letter, a digit or a special symbol. 
Characters ASCII values 
A-Z 65-90 
A-Z 97-122
0-9 48-57 
Special symbols 0-47, 58-64, 91-96,123-127 */

#include<stdio.h>
int main(){
	int a;
	printf("Enter the ASCII character:\t");
	scanf("%d",&a);
	if(a>=65&&a<91){
		printf("the character value of ASCII is A-Z");
	}else if(a>=97 &&a<123){
		printf("the character value of ASCII is a-z");
	}else if(a>=48 &&a<58){
		printf("the character value of ASCII is 0-9");
	}else{
		printf("the character value of ASCII is special symbol");
	}
	return 0;
}
