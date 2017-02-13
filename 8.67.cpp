#include <stdio.h>

int main()
{
	int sayi,direnc,sayac,i;
	int enbuyuksayi,enbuyuk=0;
	for(i=10;i<100;i++)
	{
		sayac=1;
		sayi=i;
		while(1)
		{
			direnc=(sayi/10)*(sayi%10);
			if(direnc>9)
			{
				sayac++;
				sayi=direnc;
			}
			else
			{
				break;
			}
		}
		if(sayac > enbuyuk)
		{
			enbuyuk=sayac;
			enbuyuksayi=i;
		}
	}
	printf("Carpim direnci en buyuk olan sayi= %d (Carpim direnci = %d)",enbuyuksayi,enbuyuk);
	getchar();
}
