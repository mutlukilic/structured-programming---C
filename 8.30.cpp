#include<stdio.h>
int main( void )
{
	int min1=100,min2=100;
	int i,sayilar;
	for(i=1;i<=10;i++)
	{
		printf("\n%d. sayi=",i);          
		scanf("%d",&sayilar);                       
		if(sayilar<min1)
		{
			min2=min1;
			min1=sayilar;
		}
		else
		{
			if(sayilar<min2)
			{
				min2=sayilar;
			}
		}
	}
	printf("%d %d",min1,min2);
	return 0;
}
