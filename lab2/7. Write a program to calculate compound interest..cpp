/*7. Write a program to calculate compound interest. */

#include <stdio.h>
#include <math.h>
 
int main()
{
    double P,R,T,A,CI;
    
    input:
    	
    printf("Enter the Principal Amount: ");
    scanf("%lf", &P);
    
    if(P<=0){
    	goto input;
	}
 
 	A:
    printf("Enter the Interest Rate: ");
    scanf("%lf", &R);
    
    if(R<=0){
    	goto A;
	}
	
 	B:
    printf("Enter the Time Period in Years: ");
    scanf("%lf", &T);
    if(T<=0){
    	goto B;
	}
 
    A = P * pow((1 + R / 100), T);
 
    CI= A - P;
    printf("The Compound Interest is %.2lf ",CI);
 
    return 0;
}
