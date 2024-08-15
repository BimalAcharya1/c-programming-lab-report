/*2. Write a program to display table from 1-10.*/

#include<stdio.h>
int main(){
	int i,j;
	
	for(i=1;i<=10;i++){
	printf("\n\nThe multiplication table of %d is:\n",i);

for(j=1;j<=10;j++){
	
	printf(" :- %d*%d=%d",i,j,i*j);
}
}
    return 0;
}
