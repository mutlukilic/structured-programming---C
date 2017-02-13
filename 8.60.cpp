#include<stdio.h>
int main()
{
	int buyuk=0,kucuk=100,top=0,sayac=0,yas;
	int ortalama,kirpilmis;
	
	while(1)
	{
		printf("Yasi giriniz (Durdurmak icin 0 ): ");
		scanf("%d",&yas);
		if(yas==0)
		{
			printf("-------------------------------------------------------------------------\n");
			break;
		}
		if(yas<0 || yas>99)
		{
			printf("Hata!!! Lutfen yas degerine dikkat ediniz\n");
		}
		else
		{
			top+=yas;
			sayac++;
			if(yas>buyuk)
			{
				buyuk=yas;
			}
			if(yas<kucuk)
			{
				kucuk=yas;
			}
		}
	}
	ortalama=top/sayac;
	kirpilmis=(top-(buyuk+kucuk))/(sayac-2);
	printf("Toplam %d tane izleyici giris yapti\n",sayac);
	printf(" Ortalama = %d, Kirpilmis ortalama = %d",ortalama,kirpilmis);
	return 0;
}
