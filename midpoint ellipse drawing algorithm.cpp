
#include<stdio.h>
#include<graphics.h>

int main(){

  long x,y,x_center,y_center;
  long a_sqr,b_sqr, fx,fy, d,a,b,tmp1,tmp2;
  int g_driver=DETECT,g_mode;

  initgraph(&g_driver,&g_mode,"");
  printf("********* MID POINT ELLIPSE ALGORITHM *********");
  printf("Enter coordinate x and y = ");
  scanf("%ld%ld",&x_center,&y_center);
  printf("Now enter constants a and b = ");
  scanf("%ld%ld",&a,&b);

  x=0;
  y=b;
  a_sqr=a*a;
  b_sqr=b*b;
  fx=2*b_sqr*x;
  fy=2*a_sqr*y;
  d=b_sqr-(a_sqr*b)+(a_sqr*0.25);

  while(fx<fy)
  {
    putpixel(x_center+x,y_center+y,1);
    putpixel(x_center-x,y_center-y,1);
    putpixel(x_center+x,y_center-y,1);
    putpixel(x_center-x,y_center+y,1);

    if(d<0)
    {
      d=d+fx+b_sqr;
    }
    else
    {
      y=y-1;
      d=d+fx+-fy+b_sqr;
      fy=fy-(2*a_sqr);
    }
    x=x+1;
    fx=fx+(2*b_sqr);
    delay(10);
  }

  tmp1=(x+0.5)*(x+0.5);
  tmp2=(y-1)*(y-1);
  d=b_sqr*tmp1+a_sqr*tmp2-(a_sqr*b_sqr);

  while(y>0)
  {
    putpixel(x_center+x,y_center+y,1);
    putpixel(x_center-x,y_center-y,1);
    putpixel(x_center+x,y_center-y,1);
    putpixel(x_center-x,y_center+y,1);

    if(d>=0)
    d=d-fy+a_sqr;
    else

    {
    x=x+1;
    d=d+fx-fy+a_sqr;
    fx=fx+(2*b_sqr);
    }
    y=y-1;
    fy=fy-(2*a_sqr);
  }
  getch();
  closegraph();

  return 0;
}
