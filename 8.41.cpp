#include<stdio.h>
int main( void )
{
	int i,j,sayac,buyuk=1,sayi;
	
	for(i=1;i<=1000;i++)
	{
		sayac=2;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sayac++;
			}
		}
		if(sayac>buyuk)
		{
			buyuk=sayac;
			sayi=i;
		}
	}
	printf("Boleni en cok olan sayi %d (Bolen sayisi %d)",sayi,buyuk);
	return 0;
}
