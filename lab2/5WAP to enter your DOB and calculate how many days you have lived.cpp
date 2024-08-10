/*5. WAP to enter your DOB and calculate how many days you have lived */

#include<stdio.h>
int main(){
	int year,month,date,totalday;
	printf("enter your year of birth:");
	scanf("%d",&year);
	printf("enter your month of birth:");
	scanf("%d",&month);
	printf("enter your date of birth:");
	scanf("%d",&date);
	totalday=(2080-year)*365+(12-month)*30+(30-date);
	printf("the days you have lived is:%d ",totalday);
	return 0;
}
