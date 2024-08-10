//if else if else
/*syntax:if(condition){statement;}else if(condition)
{statement;}else{statement;}*/
#include<stdio.h>
int main(){
	int num1=200;
	int num2=30;
	int num3=40;
		if(num1>num2&& num1>num3){
			printf("num 1 is greater than num2 and num3");
		}else if(num2>num3&& num2>num1){
			printf("num2 is greater than num3 and num1");
		}else{printf("num3 is greater than num1 and num2");
		}
	
	
	
	
	
	
	return 0;
	
}
