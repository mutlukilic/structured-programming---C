#include<stdio.h>
int main()
{
	int hafif=0,orta=0,agir=0,sayac=0,top=0;
	float ortalama,kilo;
	
	while(1)
	{
		printf("Kilo giriniz:  ");
		scanf("%f",&kilo);
		if(kilo==0)
		{
			printf("---------------------------------------\n");
			break;
		}
		if(kilo<0)
		{
			printf("Hata!!!!Kilo negatif olamaz tekrar giriniz\n");
		}
		else
		{
			top+=kilo;
			sayac++;
			if(kilo<50)
			{
				hafif++;
			}
			if(kilo>=50 && kilo<70)
			{
				orta++;
			}
			if(kilo>=70)
			{
				agir++;
			}
		}
	}
	ortalama=(float)top/sayac;
	printf("Toplam %d adet sporcu girilmistir\n",sayac);
	printf("%d hafif, %d orta ve %d agir siklet vardir\n",hafif,orta,agir);
	printf("Genel ortalama %.2f",ortalama);
}
