//wap toinput the radius and height of the cylinder and find the toal surface area.
#include<stdio.h>
#define pi 3.14
int main(){
	int r,h;
	float TSA;
	printf("\n the rdius of cylinder is:");
	scanf("%d",&r);
	printf("\n the height of cylinder is:");
	scanf("%d",&h);
	TSA=2*pi*r*(r+h);
		printf("\n Total surface area of cylinder is:%.2f",TSA);
	return 0;
}
