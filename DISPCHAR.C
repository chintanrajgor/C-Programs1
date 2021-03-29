#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm,i,j;
 int a[7][5]={
 {1,1,1,1,1},
 {1,0,0,0,0},
 {1,0,0,0,0},
 {1,0,0,0,0},
 {1,0,0,0,0},
 {1,0,0,0,0},
 {1,1,1,1,1},
 };
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 for(i=0;i<7;i++)
 {
 for(j=0;j<5;j++)
 {
 putpixel(200+j,200+i,15*a[i][j]);
 }
 }
 getch();
 closegraph();
 return 0;
 }