#include <graphics.h>
#include <conio.h>

void drawCharacter(char ch, int x, int y) {
    switch(ch) {
        case 'A':
            line(x+10, y, x, y+40);   // Left slant
            line(x+10, y, x+20, y+40); // Right slant
            line(x+5, y+20, x+15, y+20); // Horizontal bar
            break;
        case 'J':
            line(x+10, y, x+10, y+30);   // Vertical line
            arc(x+5, y+30, 180, 360, 5); // Bottom curve
            break;
        case 'I':
            line(x+10, y, x+10, y+40);  // Vertical line
            break;
        case 'T':
            line(x, y, x+20, y);        // Top horizontal line
            line(x+10, y, x+10, y+40);  // Vertical line
            break;
        case 'H':
            line(x, y, x, y+40);         // Left vertical line
            line(x+20, y, x+20, y+40);   // Right vertical line
            line(x, y+20, x+20, y+20);   // Horizontal bar
            break;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 50; // Starting x coordinate
    int y = 50; // Starting y coordinate

    drawCharacter('A', x, y);
    drawCharacter('J', x + 30, y);
    drawCharacter('I', x + 60, y);
    drawCharacter('T', x + 90, y);
    drawCharacter('H', x + 120, y);

    getch();
    closegraph();

    return 0;
}
