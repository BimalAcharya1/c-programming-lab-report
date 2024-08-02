//wap to input the radius of a circle, and calculate the area and circumference of the circle
#include<stdio.h>
#define pi 3.14
int main(){
	int r;
	float area,circumference;
	printf("\ninput the radius of circle:\t");
	scanf("%d",&r);
	area=pi*(r*r);
	printf(" the area of circle is:\n%f",area);
	circumference=2*pi*r;
	printf("\nthe circumference of circle is:%f",circumference);
	
	
	
	return 0;
}
