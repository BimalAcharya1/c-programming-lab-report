//wap to take user input for your first semester subject final exam marks and "if student obtained min 40 marks in each subject,display pass"

#include<stdio.h>
int main(){
	int m,cfa,st,dl,e,result,grade;
	float P,tm;
	printf("\nenter the mark of math subject\t:");
	scanf("%d",&m);
	printf("\nenter the mark of cfa subject\t:");
	scanf("%d",&cfa);
	printf("\nenter the mark of sociology and technology subject\t:");
	scanf("%d",&st);
	printf("\nenter the mark of digital and logic subject\t:");
	scanf("%d",&dl);
	printf("\nenter the mark of english subject\t:");
	scanf("%d",&e);
	 if(m>=40 && cfa>=40 && st>=40 && dl>=40 && e>=40){
  
   tm= m+cfa+st+dl+e;
    P=(tm/500)*100;
   printf("Percentage = %.2f\n", P);

   if(P >= 90)
    {
        printf("Grade A+");
    }
    else if(P >= 80)
    {
        printf("Grade B+");
    }
    else if(P >= 70)
    {
        printf("Grade B");
    }
    else if(P >= 60)
    {
        printf("Grade C");
    }
    else if(P >= 40)
    {
        printf("Grade C+");
    }}
    else
    {
        printf("YOU HAVE FAILED\n \t\t so Better try next time<chaet chornaa sikk padnah nasakee>");
    }
	return 0;}
