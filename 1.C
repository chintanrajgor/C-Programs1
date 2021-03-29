//implements binary search technique
#include<stdio.h>
#include<conio.h>
void input(int a[],int n)
{
 int i;
 printf("Enter the Elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
}
void display(int a[],int n)
{
 int i;
 printf("The Elements are:");
 for(i=0;i<n;i++)
  printf("%d",a[i]);
}
int BS(int a[],int k,int n)
{
 int low=0,mid,high=n-1,index=0;
 while(low<=high){
 mid=((low+high)/2);
 if(k==a[mid]){
 index++;
 return a[mid];
 }
 else if(k<a[mid]){
 high=mid-1;
 }
 else{
 low=mid+1;
 }
 if(index==0)
 return -1;
}
void main(){
  int k,n,p,c,r=0;
  int a[100];
  clrscr();
  printf("Enter Size of Array:");
  scanf("%d",&n);
  printf("\nEnter Number to be Searched:");
  scanf("%d",&k);
  while(r!=3){
  printf("\nEnter 1:Input,2:Binary Search,3:Exit");
  scanf("%d",&c);
  switch(c)
  {
   case 1:input(a,n);
	  break;
   case 2:p=BS(a,k,n);
	  if(p==-1)
	  printf("key is Not Found");
	  else
	  printf("key is at Position %d\n",p);
	  break;
   case 3:r=3;
	  break;
  }
}
}
