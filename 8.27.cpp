#include<stdio.h>
int main()
{
	int yas,sayac,kucuk=100;
	
	while(1)
	{
		printf("Yasi giriniz (Durdurmak icin 0 ): ");
		scanf("%d",&yas);
		if(yas==0)
		{
			printf("-------------------------\n");
			break;
		}
		if(yas<0 || yas>99)
		{
			printf("Hata!! Lutfen yas degerine dikkat ediniz\n");
		}
		else
		{
			if(yas<kucuk)
			{
				sayac=0;
				kucuk=yas;
				sayac++;
			}
			else
			{
				if(kucuk==yas)
				{
					sayac++;
				}
			}
		}
	}
	printf("En gec katilimci yasi %d ( Bu yasta toplam %d kisi giris\nyapti)",kucuk,sayac);
	return 0;
}
