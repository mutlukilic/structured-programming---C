#include<stdio.h>
int main()
{
	int sayilar,i,sayac=0,top=0;
	
	printf("Sayilari giriniz (10 adet): ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&sayilar);
		if(sayilar%2!=0)
		{
			top=top+sayilar;
			sayac++;
		}
	}
	printf("Girilen %d adet tek sayinin aritmetik ortalamasi = %.1f",sayac,(float)top/sayac);
	return 0;
}
