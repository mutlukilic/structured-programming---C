#include <stdio.h>
#include <math.h>

int main()
{
	int sayi,sayac=2,tersi;
	
	printf("Sayiyi giriniz = "); scanf("%d",&sayi);
	while(sayi<0 || sayi>99)
	{
		printf("Yanlis!!! Lutfen 2 basamkli giriniz = ");
		scanf("%d",&sayi);
	}
	
	while(1)
	{
		tersi=(sayi%10)*10+sayi/10;
		if(fabs(sayi-tersi)<10){
			break;
		}
		else{
			sayi=fabs(sayi-tersi);
			sayac++;
		}
	}
	printf("\nCikarma zinciri uzunlugu = %d",sayac);
	getchar();
}
