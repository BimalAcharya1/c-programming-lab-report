/*Write a program to display the following.
h */

#include<stdio.h>
int main(){
	int i,j;
	
	for(i=0;i<5;i++){
	
	
		for(j=0;j<=i;j++){
		
		printf("\t%c",'a'+j);
		}
		
	printf("\n");	
	}
	return 0;
}
