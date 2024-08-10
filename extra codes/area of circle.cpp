#include<stdio.h>
#define PI 3.14
int main(){
	//write a program in c calculating area of circle
	float radius,area;
	printf("input radius:\n");
	scanf("%f",&radius);
	area=PI*radius*radius;
		printf("area of circle%f",area);
	return 0;
}
