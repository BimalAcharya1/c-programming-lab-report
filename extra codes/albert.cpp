#include <stdio.h>

int main()
{
    int E1, M, DL, CFA,SO; 
    float P,S; 
    printf("Enter English Marks\t: ");
    scanf("%d",&E1);
    printf("Enter Math Marks\t: ");
    scanf("%d",&M);
    printf("Enter DL\t: ");
    scanf("%d",&DL);
    printf("Enter CFA Marks\t: ");
    scanf("%d",&CFA);
    printf("Enter Soceity Marks\t: ");
    scanf("%d",&SO);
    
    if(E1>=40 && M>=40 && DL>=40 && CFA>=40 && SO>=40){
  
    S= E1+M+DL+CFA+SO;
    P=(S/500)*100;
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
        printf("YOU HAVE FAILED\n \t\t********** SORRY TRY AGAIN**********");
    }

    return 0;
}
