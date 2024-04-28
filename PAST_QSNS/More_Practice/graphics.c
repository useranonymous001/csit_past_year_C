
/*
practicing some graphics qsns
*/

#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // code here.....
    // putpixel(x, y, red)

    line(1, 2, 5, 6) // starts from (1, 2)  ends at (5, 6)
        ellipse(int xcenter, int ycenter, int stangle, int endangle, int xradi, int yradi);

    // program to draw an triangle
    line(10, 20, 50, 50);
    line(50, 60, 200, 300);
    line(200, 300, 10, 20);

    closegraph();

    return 0;
}