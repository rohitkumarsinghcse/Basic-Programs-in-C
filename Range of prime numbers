/* Prime numbers in the given range */
#include<stdio.h>
int main()
{
	int l,h,i,count=0;
	printf("Enter the required low range and high range:");
	scanf("%d %d",&l,&h);
	printf("Prime numbers between %d and %d are :\n",l,h);
	while((l<h)&&l!=1)
	{
		count=0;
		for(i=2;i<=l/2;i++)
		{
			if(l%i==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		printf("%d\n",l);
		l++;
	}
	return 0;
}
