/*16. Write a program to find GCD (greatest common divisor or HCF) and LCM (least 
common multiple) of two numbers.*/

#include<stdio.h>

int main()
{
	 int A, B, GCD, LCM, i;
	
	 printf("Enter first number:\t ");
	 scanf("%d", &A);
	 printf("Enter second number:\t ");
	 scanf("%d", &B);
	
	 for(i=1; i<=A; i++)
	 {
		  if(A%i==0 && B%i==0)
		  {
		   	GCD = i;
		  }
	 }
	 LCM = (A * B)/ GCD;
	 printf("GCD = %d" ,GCD);
	 printf("\nLCM = %d" ,LCM);
	 
	 return(0);
}
