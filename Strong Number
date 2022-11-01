/*Strong Number*/
#include<stdio.h>
int main()
{
   int n,r,fact=1,sum=0,b,i;
   printf("Enter the number:\n");
   scanf("%d",&n);
   b=n;
   while(n!=0)
   {
   	
   	 fact=1;
   	 r=n%10;
   	 n=n/10;
   	 for(i=1;i<=r;i++)
   	 {
   	 	fact=fact*i;
   	 }
     sum=sum+fact;
     
	}
    
    if(sum==b)
    printf("%d is a strong number",b);
    else
    printf("%d is not a strong number",b);
    return 0;
}
