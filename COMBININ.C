#include<stdio.h>
#include<conio.h>
void main()
{
 int n,e,s,count=0;
 clrscr();
 printf("Enter n value:");
 scanf("%d",&n);
 printf("Enter e value:");
 scanf("%d",&e);
 while(n!=0)
 {
  s=n%10;
  n=n/10;

  if(s==e)
  {
   count=1;

   break;
  }
}
 if(count==1)
 {
  printf("Yes");
 }
  else
  {
   printf("No");
  }


 getch();
}