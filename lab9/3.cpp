/*3. WAP to draw rectangle*/

#include <graphics.h>  // Include the graphics library for graphical operations
#include <conio.h>     // Include the console input/output library for getch() function

int main(){
    int gd = DETECT, gm;  // Declare graphics driver (gd) and graphics mode (gm)
    
    // Initialize graphics mode using the graphics driver and mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set the color for drawing the rectangle (e.g., WHITE)
    setcolor(WHITE);
    
    // Draw a rectangle with the top-left corner at (100, 100) 
    // and the bottom-right corner at (300, 200)
    rectangle(100, 100, 300, 200);
    
    // Wait for a key press to keep the window open until the user presses a key
    getch();
    
    // Close the graphics mode and return to normal text mode
    closegraph();
    
    return 0;  // End of the program
}

