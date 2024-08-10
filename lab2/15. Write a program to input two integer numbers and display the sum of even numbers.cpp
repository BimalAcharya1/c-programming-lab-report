/*15. Write a program to input two integer numbers and display the sum of even numbers 
between these two input numbers*/

#include<stdio.h>
int main(){
	int A,B,Sum=0;
	
	input:
	printf("Enter first number:\t");
	scanf("%d",&A);
	
	printf("Enter second number:\t");
	scanf("%d",&B);
	
	if (A>=B || A==B+1 || B==A+1 ){
		
		goto input;
	}
	printf("\nNo between %d and %d are: ",A,B);
	
	for(A=++A;A<B;A++){
		
		printf("%d ",A);
		
		if(A%2==0){
		Sum+=A;
		
		}
		
		}
		printf("\nSum of Even no between them:%d",Sum);

}
