/*3. A sales man gets commission on the basis of his daily sales and the rate of commission is 
as follows: 
Total sales made Commission rate 
Below 5000 1% 
Between 5000 to 8000 3% 
Between 8000 to 11000 5% 
Above 11000 10% 
Write a program asking his total sales and calculate his commission amount */

#include<stdio.h>
int main(){
	int ts;
	float co;
	printf("The total sales of a man in his daily basis:");
	scanf("%d",&ts);
	if(ts<5000){
		
		if(co=ts*0.01);
		printf("the commission received by man at 1 percent is:%f",co);}
	else if(ts>=8000 && ts<=11000){
		if(co=ts*0.03);
	printf("the commission received by man at 3 percent is:%f",co);}
	else if(ts>11000){
		if(co=ts*0.1);
		printf("the commission received by man at 10 percent is:%f",co);}
	return 0;
}
