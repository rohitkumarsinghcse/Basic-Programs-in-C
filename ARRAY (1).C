#include<stdio.h>
#include<conio.h>
char * fun(char *str) //aaaaAAAAbb
{
	static char str2[100];
	char str1[100],str3[100],min;//aAb
	int i,j=0,z,s,c[100],k=0,count,max,x=0;
	for(i=0;str[i]!='\0';i++)//aaabbbccc
	{
		s=0;
		for(z=0;z<=j;z++) //abc
		{
			if(str[i]==str1[z])
			{       s=1;
				break;
			}
		}
		if(s==0)
		{
		str1[j++]=str[i];
		}

	}
	str1[j]='\0';
	//printf("%s",str1);
	for(i=0;str1[i]!='\0';i++)//abA
	{
		count=0;
		for(z=0;str[z]!='\0';z++)
		{
			if(str1[i]==str[z])
				count++;
		}
	      c[k++]=count;
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
	       //	printf("%d ",c[i]);
	}

	max=c[0];
	for(i=1;i<k;i++)
	{
		if(max<c[i])
		{
			max=c[i];
		}
	}
	//printf("\n%d",max);
	for(i=0;i<k;i++)
	{
		  if(c[i]==max)//3==3
		  {
			str3[x++]=str1[i]; //abc 4 2 2

		  }
	}
	str3[x]='\0';
	//printf("\n");
	for(i=0;i<x;i++)
	//printf("%c",str3[i]);
	min=str3[0];
	for(i=1;i<x;i++)
	{
	       if(min>str3[i])
	       {
		min=str3[i];
	       }
	}
	//printf("\n%c",min);
	str2[0]=max;
	str2[1]=min;
	return str2;
}
void main()
{
	char str[100],*str2;
	clrscr();
	scanf("%[^\n]s",str);
	str2=fun(str);//A 4
	printf("%c %d",str2[1],str2[0]);
	getch();
}