/*2. WAP to draw concentric circle.*/

#include<graphics.h>  // Include the graphics library for graphical operations
#include<conio.h>     // Include the console input/output library for getch() function

int main(){
    int gd = DETECT, gm;  // Declare graphics driver (gd) and graphics mode (gm)
    int x = 300, y = 200; // Center coordinates for the circles
    int radius = 50;      // Starting radius for the first circle

    // Initialize graphics mode using the graphics driver and mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Loop to draw concentric circles
    for(int i = 0; i < 5; i++) {
        // Set the color for each circle (different color for each iteration)
        setcolor(i + 1);  // i + 1 to change color for each circle (1-15)
        
        // Draw a circle with center (x, y) and increasing radius
        circle(x, y, radius);
        
        // Increase the radius for the next circle
        radius += 30;  // Increase radius by 30 for each new circle
    }

    // Wait for a key press to keep the window open until the user presses a key
    getch();
    
    // Close the graphics mode and return to normal text mode
    closegraph();
    
    return 0;
}


