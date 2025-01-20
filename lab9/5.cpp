/*5. WAP to draw a hexagon.*/

#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Define the coordinates for the hexagon vertices
    int points[] = {300, 150, 350, 100, 400, 150, 400, 200, 350, 250, 300, 200, 300, 150};

    // Set color to WHITE for the hexagon
    setcolor(WHITE);

    // Draw the hexagon using drawpoly
    drawpoly(7, points); // 7 points because we need to close the shape

    getch();
    closegraph();
    return 0;
}
