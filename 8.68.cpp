#include <stdio.h>
#include <math.h>

int main()
{
	int adet=0,tersi,yedek,i;
	int sayi,sayac;
	
	printf("Cikarma zinciri 6 olan iki basamakli sayilar\n");
	for(i=10;i<100;i++)
	{
		sayac=1;
		sayi=i;
		while(1)
		{
			tersi=(sayi%10)*10+(sayi/10);
			if(fabs(sayi-tersi)<10)
			{
				sayac++;
				break;
			}
			else
			{
				sayi=fabs(sayi-tersi);
				sayac++;
			}
		}
		if(sayac==6){
			printf("%d, ",i);
			adet++;
		}
	}
	printf("\nToplam %d adet",adet);
	return 0;
}
