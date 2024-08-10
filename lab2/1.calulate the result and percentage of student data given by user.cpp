/*Write a program that ask the marks of student in five subjects and find out the percentage 
of marks. 
a. The program should rank the student as: 
i. 80% and above--- distinction 
ii. 60% -79%---first division 
iii. 40%-60%-- pass 
iv. Below 40% fail.*/
 
#include<stdio.h>
int main(){
	int math,cfa,dl,english,st,perc;
	printf("input the mark of math:\n");
	scanf("%d",&math);
	printf("input the mark of cfa:\n");
	scanf("%d",&cfa);
	printf("input the mark of dl:\n");
	scanf("%d",&dl);
	printf("input the mark of english:\n");
	scanf("%d",&english);
	printf("input the mark of st:\n");
	scanf("%d",&st);
    perc=(math+cfa+dl+english+st)/5;
   if(math>=40 && cfa>=40 && dl>=40 && english>=40 && st>=40)
   {
	if (perc>=80){
   printf("Congratulation you have Passed\n\t**DISTINCTION**");
}
   else if(perc>=60 && perc<80 ){
   printf("Congratulation you have Passed\n\t**FIRST DIVISION**");	
}
   else if(perc>=40 && perc<60){
   printf("Congratulation you have Passed");
}
}
   else
   printf("You have Failed\n\t**TRY AGAIN**");

   return 0;

}
