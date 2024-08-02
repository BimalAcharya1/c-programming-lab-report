//wap to input length and breadth of a rectangle and calculate the area of rectangle
#include<stdio.h>
int main(){
	int l,b,area;
	printf("input the length of rectangle\n");
	scanf("%d",&l);
	printf("input the bradth of rectangle\n");
	scanf("%d",&b);
	area=l*b;
	printf("the area of rectangle is:\n%d",area);
	return 0;
}

