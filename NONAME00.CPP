#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
float x1,x2,y1,y2,dx,dy,len,ix,iy,x,y,s1,s2;
int i,j,ch;
int main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter the first coordinates.");
printf("\nx1:");
scanf("%f",&x1);
printf("\ny1:");
scanf("%f",&y1);
printf("Enter the second coordinates.");
printf("\nx2:");
scanf("%f",&x2);
printf("\ny2:");
scanf("%f",&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
printf("\nthe value of delta x:%f",dx);
printf("\nthe value of delta y:%f",dy);
if(dy>dx)
{
 len=dy;
 }
 else if(dx>dy)
 {
 len=dy;
 }
 else{
 len=dy;
 }
 printf("\nthe length is %f",len);
 ix=(x2-x1)/len;
 iy=(y2-y1)/len;
 printf("\nThe increment in X:%f",ix);
 printf("\nThe increment in Y:%f",iy);
 if((x2-x1)<0)
 {
  x=x1-0.5;
  }
  if((x2-x1)>0)
  {
  x=x1+0.5;
  }
  else if((x2-x1)==0)
  {
  x=x1;
  }
  printf("\nThe value of init X:%f",x);
 if((y2-y1)<0)
 {
  y=y1-0.5;
  }
  if((y2-y1)>0)
  {
  y=y1+0.5;
  }
  else if((y2-y1)==0)
  {
  y=y1;
  }
  printf("\nThe value of init Y:%f",y);
  printf("Press any key to continue to the graph");
  getch();
  clrscr();
  s1=floor(x);
  s2=floor(y);
  printf("\nChoose \n1.straight line\n2.dotted line\n3.dash line");
  printf("\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    clrscr();
    for(i=0;i<len;i++)

    {
      putpixel(s1,s2,4);
      x=x+ix;
      y=y+iy;
      s1=floor(x);
      s2=floor(y);
      }
      break;
      case 2:
      clrscr();
      for(i=0;i<len;i++)
    { if(i%2==0)
      {
      putpixel(s1,s2,4);
      }
      x=x+ix;
      y=y+iy;
      s1=floor(x);
      s2=floor(y);
      }
      break;
      case 3:
      clrscr();
      for(i=0;i<len;i++)
    { if(i%4!=0)
    {
      putpixel(s1,s2,4);
      }
      x=x+ix;
      y=y+iy;
      s1=floor(x);
      s2=floor(y);
      }
      break;
      default:
      printf("Enter the proper value from 1 to 3");
      }
      getch();
      closegraph();
      return 0;
      }
