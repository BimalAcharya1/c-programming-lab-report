/*14. Write a program to find the largest and smallest among three entered numbers and also 
display whether the identified largest/smallest number is even or odd.*/

#include<stdio.h>
int main(){
  int A,B,C;
  printf("Enter first number:\t");
  scanf("%d",&A);
  printf("Enter second number:\t");
  scanf("%d",&B);
  printf("Enter third number:\t");
  scanf("%d",&C);
  
                      //For BIGGEST CASE
  if(A > B){
    if(A > C){
    	if(A%2==0){
    printf("%d is Biggest and Even Number",A);
    
		}else{
    printf("%d is Biggest and Odd Number",A);
		}
			
    } else {
    	if(C%2==0){
    printf("%d is Biggest and Even Number",C);
		}else{
	printf("%d is Biggest and Odd Number",C);
		}
      }
  } else {
    if(B > C){
    	if(B%2==0){
    printf("%d is Biggest and Even Number",B);
    		}else{
    printf("%d is Biggest and Odd Number",B);
			}
    }else {
    if(C%2==0){
    printf("%d is Biggest and Even Number",C);
	}else{
	printf("%d is Biggest and Odd Number",C);
	}
    
    }
  }
               //FOR SMALLEST CASE
  if(A < B){
    if(A < C){
    	if(A%2==0){
    printf("\n%d is Smallest and Even Number",A);
    
		}else{
    printf("\n%d is Smallest and Odd Number",A);
		}
			
    } else {
    	if(C%2==0){
    printf("\n%d is Smallest and Even Number",C);
		}else{
	printf("\n%d is Smallest and Odd Number",C);
		}
      }
  } else {
    if(B < C){
    	if(B%2==0){
    printf("\n%d is Smallest and Even Number",B);
    		}else{
    printf("\n%d is Smallest and Odd Number",B);
			}
    }else {
    if(C%2==0){
    printf("\n%d is Smallest and Even Number",C);
	}else{
	printf("\n%d is Smallest and Odd Number",C);
	}
    
    }
  }
  return 0;
}
