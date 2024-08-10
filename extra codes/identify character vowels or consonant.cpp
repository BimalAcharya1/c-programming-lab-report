//wap in c to identify vowels and consonant


#include<stdio.h>
int main(){
	int islowercasevowel,isuppercasevowel;
	char letter;
	printf("enter character\t");
	scanf("%c",&letter);
    
	 //return true is something available
	islowercasevowel= (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
	isuppercasevowel=(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U');	
    if(islowercasevowel|| isuppercasevowel)
	{
	printf("%c is vowel.\n",letter);
		}else
	{printf("%c is consonant\n",letter);
	}
	
	
	
	return 0;
}
