/*6. Write a program to swap two variables values with and without using third variables. */

#include<stdio.h>
int main(){
	int A,B,C;
	printf("Enter Value of X:\t");
	scanf("%d",&A);
	printf("Enter value of Y:\t");
	scanf("%d",&B);
	
	printf("\t\t**WITHOUT USING THIRD VARIABLE SWAP THE VALUE OF X AND Y**");
	printf("\nThe value of X and Y before swap is: \nX=%d\nY=%d",A,B);

	A=A-B;
	B=A+B;
	A=B-A;
	
	printf("\nThe value of X and Y after swap is: \nX=%d\nY=%d",A,B);
	
	printf("\n\t\t**SWAPING AGAIN VALUES OF X AND Y AFTER USING THIRD VARIABLES**");
	printf("\nThe value of X and Y before swap is: \nX=%d\nY=%d",A,B);
	
	C = A;
 	A = B;
	B = C;
	
	printf("\nThe value of X and Y after swap is: \nX=%d\nY=%d",A,B);
	
	return 0;
	
	
	
}
