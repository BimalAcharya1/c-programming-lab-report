/*4. WAP to draw a National Flag of Nepal.*/

#include <graphics.h>
#include <conio.h>

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
	
	setcolor(WHITE);
	line(200,100,200,400); //Vertical line from top(100,100) to bottom(100,300)
	
	//First triangle (upper triangle)
	line(200,100,400,150); //Left side of the upper triangle 
	line(200,200,400,150); //Right side of the upper triangle
	
	//Second triangle (lower triangle)
	line(200,200,400,250); //Left side of the upper triangle 
	line(200,300,400,250); //Right side of the upper triangle
	
	getch();
	closegraph();
	return 0;
}
