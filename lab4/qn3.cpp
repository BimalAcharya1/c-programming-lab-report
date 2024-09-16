/*3. WAP that reads 10 float numbers from user and display the entered numbers in the screen using 
Accessing Data from an Array */

#include<stdio.h>
int main(){
	int i;
	float arr[10];
	printf("Enter marks 10 numbers:");
	for(i=0;i<10;i++)
	{
	scanf("%f",&arr[i]);
	}
	printf("\n The entered numbers are:\n");
	for(i=0;i<10;i++)
	{
	printf("\narr[%d]=%f",i,arr[i]);
	}
	return 0;
	}
