#include <graphics.h>
#include <iostream>

int main()
{
    int graphD = DETECT, graphM;
    initgraph(&graphD, &graphM, "");

    line(160, 160, 350, 100);
    line(160, 160, 200, 200);
    line(350, 160, 200, 200);

    getch();
    closegraph();
}