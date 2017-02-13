#include<stdio.h>
int main( void )
{
	int sayilar;
	int i,j;
	printf("5 adet sayi giriniz: ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&sayilar);
		for(j=1;j<=sayilar;j++)
		{
			printf("*");
		}	
		printf("\n");
	}
}
