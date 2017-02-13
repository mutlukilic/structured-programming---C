#include<stdio.h>
int main()
{
	int bnormal=0,byuksek=0,bdusuk=0;
	int knormal=0,kyuksek=0,kdusuk=0;
	int buyuk,kucuk;
	
	printf("Tansiyon olcum programina hos geldiniz\n");
	printf("(Durdurmak icin herhangi bir degeri sifir giriniz)\n");
	printf("------------------------------------------------\n");
	while(1)
	{
		printf("Tansiyon degerlerini giriniz (Buyuk ve Kucuk) : ");
		scanf("%d %d",&buyuk,&kucuk);
		if(buyuk==0 || kucuk==0)
		{
			printf("------------------------------------------------\n");
			printf("Program sona erdi\n");
			break;
		}
		if(buyuk>=120 && buyuk<=140)
		{
			printf("Buyuk normal,");
			bnormal++;
		}
		if(buyuk<120)
		{
			printf("Buyuk kucuk,");
			bdusuk++;
		}
		if(buyuk>140)
		{
			printf("Buyuk yuksek,");
			byuksek++;
		}
		if(kucuk>=70 && kucuk<=90)
		{
			printf("Kucuk normal\n");
			knormal++;
		}
		if(kucuk<70)
		{
			printf("Kucuk dusuk\n");
			kdusuk++;
		}
		if(kucuk>90)
		{
			printf("Kucuk yuksek\n");
			kyuksek++;
		}
	}
	printf("Buyuk (Normal = %d , Yuksek =%d, Dusuk=%d adet)\n",bnormal,byuksek,bdusuk);
	printf("Kucuk (Normal = %d , Yuksek =%d, Dusuk=%d adet)\n",knormal,kyuksek,kdusuk);
	printf("       tansiyon degeri girilmistir.");
	return 0;
}
