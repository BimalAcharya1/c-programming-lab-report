/* 3. Write a program to display square if it is odd and cube if it is even ranging from 1-20. */

#include<stdio.h>
int main (){
	int i,j;
	
	for(i=1;i<=20;i++){
		if(i%2==0){
		printf("%d is even so cube is: %d\n",i,i*i*i);
		
		}else{
			
	printf("%d is odd so square is: %d\n",i,i*i);
		}
	}
	return 0;
}
