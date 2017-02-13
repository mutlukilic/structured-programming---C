#include<stdio.h>
int main()
{
	int model,enyeni=0,sayac;
	
	while(1)
	{
		printf("Model yilini giriniz (Durdurmak icin 0 ): ");
		scanf("%d",&model);
		if(model==0)
		{
			break;
		}
		if(model/1000!=0)
		{
			if(model>enyeni)
			{
				sayac=0;
				enyeni=model;
				sayac++;
			}
			else
			{
				if(model==enyeni)
				{
					sayac++;
				}
			}
		}
		else
		{
			printf("Hata!!! Lutfen 4 haneli deger giriniz\n");
		}
	}
	printf("-----------------------\n");
	printf("En yeni model %d ( Toplam %d tane giris yapti)",enyeni,sayac);
	
	return 0;
}
