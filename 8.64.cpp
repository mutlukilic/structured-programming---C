#include <stdio.h>

int main()
{
	int sayi,sayac=1,direnc;
	
	printf("Sayiyi giriniz = "); scanf("%d",&sayi);
	while(sayi<0 || sayi>99)
	{
		printf("Yanlis!!! Lutfen 2 basamakli giriniz = ");
		scanf("%d",&sayi);
	}
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
	printf("Carpim direnci = %d",sayac);
	getchar();
}
