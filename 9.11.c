#include<stdio.h>
int mukemmelyaz(int,int);
int main( void )
{
	int bas,son,a;
	printf("bas ve son sayi sinirlarini giriniz: ");
	scanf("%d %d",&bas,&son);
	a=mukemmelyaz(bas,son);
	return 0;
}
int mukemmelyaz(int bas,int son)
{
	int i,top,j,mukemmel;
	for(i=bas;i<=son;i++)
	{
		top=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				top=top+j;
			}
		}
		if(i==top)
		{
			mukemmel=i;
			printf("%d\n",mukemmel);
		}
		else
		{
			continue;
		}
	}
	return mukemmel;
}
