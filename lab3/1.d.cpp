/*Write a program to display the following.
d.
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1 */

#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		
		for(k=5;k>=i;k--){
			printf("\t");
		}
		for(j=i;j>=1;j--){
			printf("\t%d",j);
		}
		printf("\n");
	}
}
