#include<stdio.h>
int main(){
	char ch;
	char str[100];
	printf("enter a character:");
	ch=getchar();
	getchar();
	printf("eyou entered:");
	putchar(ch);
	printf("\n");
	getchar();
	printf("enter a string");
	gets(str);
	printf("eyou entered:");
	puts(str);
	int num;
	printf("enter an integer:");
	scanf("%d",&num);
	printf("you entered:%d\n",num);
	
	
	
	return 0;
}
