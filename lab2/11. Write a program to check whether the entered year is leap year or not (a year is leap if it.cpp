/*11. Write a program to check whether the entered year is leap year or not (a year is leap if it 
is divisible by 4 and divisible by 100 or 400.)*/

#include<stdio.h>
int main(){
	 
	int A;
	
	input:
	printf("\t\t**Checking  the year whether it is Leap year of not**");
	printf("\nEnter Years:\t");
	scanf("%d",&A);
	
	if(A<=0){
		goto input;
	}
	
	if(A%4==0 && (A%100==0 || A%400==0)){
		printf("**The year you have Entered is in Leap Years**");
		
	} else{
		printf("The year have Entered is not in Leap Years\n\t**THANK YOU**");
	}
	return 0;
	
}
