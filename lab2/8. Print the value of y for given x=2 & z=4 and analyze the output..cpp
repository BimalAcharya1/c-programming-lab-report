/*8. Print the value of y for given x=2 & z=4 and analyze the output. 
a. y = x++ + ++x;
b. y= ++x + ++x; 
c. y= ++x + ++x + ++x;
d. y = x>z; e. y= x>z? x:z;
e. y = x&z;
f. y= x>>2 + z<<1; */

#include<stdio.h>
int main(){
	int X=2,Z=4,Y;
	
	Y= X++ + ++X;
	printf("a.x++ + ++x =\t%d",Y);
	
	Y= ++X + ++X;
	printf("\nb.++x + ++x= \t%d",Y);
	
	Y= ++X + ++X + ++X;
	printf("\nc.++x + ++x + ++x= \t%d",Y);
	
	Y= X>Z;
	printf("\nd.x>z=\t%d",Y);
	
	Y=X>Z? X:Z;
	printf("\ne.x>z? x:z=\t%d",Y);
	
	Y=X & Z;
	printf("\nf.x&z=\t%d",Y);
	
	Y=X>>2 + Z<<1;
	printf("\ng.x>>2 + z<<1=\t%d",Y);
	
	return 0;
	
	}
