#include <graphics.h>
#include <stdio.h>
#include <math.h>
#include <dos.h>

int main( )
{
    int i,gd=DETECT,gm;
    float x,y,x1,y1,x2,y2,dx,dy,step;

    initgraph(&gd,&gm,"");

    printf("Enter the value of x1 and y1 : ");
    scanf("%f%f",&x1,&y1);
    printf("Enter the value of x2 and y2: ");
    scanf("%f%f",&x2,&y2);

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy)
        steps=dx;
    else
        steps=dy;

    dx=dx/steps;
    dy=dy/steps;

    x=x1;
    y=y1;

    i=1;
    while(i<=steps)
    {
        putpixel(x,y,5);
        x=x+dx;
        y=y+dy;
        i=i+1;
        delay(300);
    }

    closegraph();

    return 0;
}
