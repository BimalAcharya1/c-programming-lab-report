/*+4. Write a program to calculate tax based on marital status, annual income and gender.
Married
annual income <= 450000 1% tax
annual income > 450000 and <= 550000 extra 10% tax for 100000
annual income > 550000 and <= 750000 extra 20% tax for 200000
annual income > 750000 and <= 1300000 extra 30% tax for 550000
annual income > 1300000 extra 35% tax for remaining amount
Un-married
annual income <= 400000 1% tax
annual income > 400000 and <= 500000 extra 10% tax for 100000
annual income > 500000 and <= 750000 extra 20% tax for 250000
annual income > 750000 and <= 1300000 extra 30% tax for 550000
annual income > 1300000 extra 35% tax for remaining amount
If gender is female
- 10% tax discount */


      #include<stdio.h>
int main(){
  
  int income,marital,gender;
  float tax;
  
	A:
  printf("\nEnter your annual income?\t");
  scanf("%d",&income);
  
  if(income<=0){
  	goto A;
  }
  	B:
  printf("\nAre you married? \nSelect \n 1. For Married \n 2. For Unmarried\n");
  scanf("%d",&marital);
  
  if(marital != 1 && marital != 2){
  	goto B;
  }
  	C:
  printf("\nSelect gender? \nSelect \n 1. For Male \n 2. For Female\n");
  scanf("%d",&gender);
  
  if(gender != 1 && gender != 2){
  	goto C;
  }
  
  if(marital == 1){
    if(income > 0 && income <= 450000){
      tax = income * 0.01;
    } else if(income > 450000 && income <= 550000){
      tax = 4500 + (income-450000) * 0.1;
    } else if(income > 550000 && income <= 750000){
      tax = 4500 + 10000 + (income-550000) * 0.2;
    } else if(income > 750000 && income <= 1300000){
      tax = 4500 + 10000 + 40000 + (income-750000) * 0.3;
    } else if(income > 1300000){
      tax = 4500 + 10000 + 40000 + 165000 +  (income-1300000) * 0.35;
    }
    
  } if (marital==2){
    if(income > 0 && income <= 400000){
      tax = income * 0.01;
    } else if(income > 400000 && income <= 500000){
      tax = 4000 + (income-400000) * 0.1;
    } else if(income > 500000 && income <= 750000){
      tax = 4000 + 10000 + (income-500000) * 0.2;
    } else if(income > 750000 && income <= 1300000){
      tax = 4000 + 10000 + 50000 + (income-750000) * 0.3;
    } else if(income > 1300000){
      tax = 4000 + 10000 + 50000 + 165000 +  (income-1300000) * 0.35;
    }
  }
  
  if(gender ==2){
    tax = tax - (tax*0.1);
  }
  printf("Final tax amount is : %.2f",tax);
}
