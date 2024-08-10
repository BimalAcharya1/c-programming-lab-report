#include<stdio.h>
int main(){
	int i,j, val;
	val = 2;
	for(j=1;j<=5;j++){
	    for(i=0;i<j;i++)
		{
		printf("\t %d",val);
		val+=1;
		}
		
		printf("\n");
	}return 0;
}
