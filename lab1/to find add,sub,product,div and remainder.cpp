//wap to enter two numbers and calculate addition,subraction,division and quotient of enter value
#include<stdio.h>
int main(){
 int num1,num2,sum,diff,product;
 float division,quotient;
 printf("\n enter first number:");
 scanf("%d",&num1);
 printf("\n enter second number:");
 scanf("%d",&num2);
 sum=num1+num2;
 diff=num1-num2;
 product=num1*num2;
 division=num1/num2;
 quotient=(int)num1/(int)num2;
 printf("\n sum =%d",sum);
 printf("\n difference =%d",diff);
 printf("\n product =%d",product);
 printf("\n division =%.3f",division);
 printf("\n quotient =%.3f",quotient);
    
 
  
 
	
	
	return 0;
}
