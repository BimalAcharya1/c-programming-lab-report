//wap to convert temperature given  from  farhenheit to celcius
#include<stdio.h>
int main(){
	float f,c;
	printf("input the temerature in fahrenheit:");
	scanf("%f",&f);
    c=((f-32)/1.8);
	printf("the temperature is in celcius:%f\n",c);
	return 0;
}


