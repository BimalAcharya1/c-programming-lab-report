//wap to input principal amount,no of years and rate of interest from user and calculate the simple interest.
#include<stdio.h>
int main(){
	int p,t,r;
	float si;
	printf("\ninput the principal amount:");
	scanf("%d",&p);
	printf("\ninput the rate amount:");
	scanf("%d",&r);
	printf("\ninput the time:");
	scanf("%d",&t);
	si=(p*t*r)/100;
	printf("\nthe simple interest is:%f",si);
	return 0;
}
