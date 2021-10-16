#include<stdio.h>
#include<graphics.h>
void drawline(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;
    while(x<x1)
    {
        if(p>=0)
        {
            putpixel(x,y,7);
            y=y+1;
            p=p+2*dy-2*dx;
            delay(300);
        }
        else
        {
            putpixel(x,y,7);
            p=p+2*dy;}
            x=x+1;
            delay(300);
        }
}
int main()
{
    int gdriver=DETECT, gmode, error, x1, y1, x2, y2;
    initgraph(&gdriver, &gmode, "");
    printf("Enter co-ordinates of first point: ");
    scanf("%d%d", &x1, &y1);
    printf("Enter co-ordinates of second point: ");
    scanf("%d%d", &x2, &y2);
    drawline(x1, y1, x2, y2);
    return 0;
}
