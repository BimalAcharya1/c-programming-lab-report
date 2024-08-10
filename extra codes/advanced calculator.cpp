#include<stdio.h>
int main(){
	//declaring variables
	int firstnumber,secondnumber,add,sub,mul,div,mod;
	//getting user inputs
		printf("enter value of first number:\n");
	     scanf("%d",&firstnumber);
		printf("enter value of second number:\n");
	     scanf("%d", &secondnumber);
	
	//calculating
	add= firstnumber+secondnumber;
	sub= firstnumber-secondnumber;
	mod=firstnumber%secondnumber;
	div=firstnumber/secondnumber;
	mul=firstnumber*secondnumber;
	//user declaration for user output
	printf("\n first number and second number%d",add);
	printf("\n sub of two numbers%d",sub);
	printf("\n mod of two numbers%d",mod);
	printf("\n div of two numbers%d",div);
	printf("\n mul of two numbers%d",mul);
	
	return 0;
}
