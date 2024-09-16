/* 1. WAP to illustrate the searching of an array using sequential search that is searching in 
unordered array. */

#include<stdio.h>
#define MAX 5
int main(){
	int number[MAX],key,i,flag=0;
	for(i=0;i<MAX;i++)
	{
		printf("\n Enter the %d the elements of array:",i+1);
		scanf("%d",&number[i]);
	}
	printf("\n Enter the key element:");
	scanf("%d",&key);
	for(i=0;i<MAX;i++)
	{
		if(key == number[i])

	{
		flag=1;
	break;
	}
	else
	    flag=0;}
	    
	if(flag==1)
	{
		printf("\n%d was found at position %d",key,i+1);
	}else
	{
		printf("\n%d was not found",key);
		return 0;
	}
}
