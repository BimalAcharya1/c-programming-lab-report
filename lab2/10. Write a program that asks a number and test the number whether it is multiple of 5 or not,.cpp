/*10. Write a program that asks a number and test the number whether it is multiple of 5 or not, 
divisible by 7 but not by eleven*/

#include<stdio.h>
int main(){
	 
	int A;
	printf("\t**Testing the number whether it is**\nMultiple of 5\nDivisible of 7 but no Divisibale by 11");
	printf("\nEnter number:\t");
	scanf("%d",&A);
	
	if(A%5==0){
		printf("\n%d is multiple of 5",A);
	}else{
		printf("\n%d is not multiple of 5",A);
	}
	if(A%7==0 && A%11!=0 ){
		printf("\n%d is divisible of 7 but not by 11",A);
	}else{
		printf("\n%d is not divisible of 7 but  by 11",A);
		}

	return 0;
	
}
