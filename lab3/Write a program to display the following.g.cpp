/*Write a program to display the following.
g. */

#include<stdio.h>
int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		
		for(j=1;j<=i;j++){
		printf("\t%d",j*j);
		}
	printf("\n");	
	}
}
