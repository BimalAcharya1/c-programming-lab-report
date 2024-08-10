/*12. Write a program to read the values of coefficients a, b and c of a quadratic equation 
ax2+bx+c=0 and find roots of the equation.*/

#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,D,R1,R2,Re,Im;
	//D=discriminat , R1=root1 , R2=root2  , Re=realPart and Im=imaginaryPart
	printf("Enter the coefficients of a , b and c:\n");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a==0){
	printf("\t**INVILID**\nCofficient of a must not be 0");
	}
	
	//Formula of finding D
	
	D=b*b-4*a*c;
	
	//Now there are 3 condition D>0 , D=0 and D<O
	
	if(D>0){
	
	//when D>0 then roots are real and different
	//formula for root
	
	R1=(-b+sqrt(D)) / (2*a);
	R2=(-b-sqrt(D)) / (2*a);

	printf("Root1:\t%.2f\n",R1);
	printf("Root2:\t%.2f\n",R2);
		
	}else if(D==0)
	{
	//D=0 then Two equal and real roots
	// Formula of roots 
	
	R1= R2 = -b/ (2*a);
	
	printf("Root1: \t%.2f\nRoot2:\t%2.f",R1);
	
	}else{
	//D<0 then Complex and different roots
	
	Re=-b/(2*a);
	Im= sqrt(-D) / (2*a);
	
	printf("Root1: \t%.2f + %.2f\n",Re,Im);
	printf("Root1: \t%.2f - %.2f",Re,Im);
	
	}
	return 0;
	
}
