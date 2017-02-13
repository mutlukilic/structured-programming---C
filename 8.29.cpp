#include<stdio.h>
int main( void )
{
	int min1=1,min2=1,min3=1;
	int i,sayilar;
	for(i=1;i<=10;i++)
	{
		printf("%d.sayi=",i);
		scanf("%d",&sayilar);
		if(sayilar>min1)
		{
			min2=min1;
			min1=sayilar;
		}
		else
		{
			if(sayilar>min2)
			{
				min3=min2;
				min2=sayilar;
			}
			else
			{
				if(sayilar>min3)
				{
					min3=sayilar;
				}
			}
		}
	}
	printf("%d %d %d",min1,min2,min3);
	return 0;
}
