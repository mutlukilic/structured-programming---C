#include <stdio.h>

int main()
{
	int model,aracsayisi=0,toplam=0;
	int enkucuk=2016,enbuyuk=0,ortalama,kirpilmis;
	while(1)
	{
		printf("Model yilini giriniz (Durdurmak icin  0 ): ");
		scanf("%d",&model);
		if(model==0)
		{
			printf("-------------------------------------------------------------------------\n");
			break;
		}
		if(model<1000 || model>2016)
		{
			printf("Hata!!! Lutfen 4 haneli giriniz\n");
		}
		else
		{
			toplam += model;
			aracsayisi++;
			if(model>enbuyuk){
				enbuyuk=model;
			}
			if(model<enkucuk){
				enkucuk=model;
			}
		}
	}
	ortalama=toplam/aracsayisi;
	kirpilmis=(toplam-(enbuyuk+enkucuk))/(aracsayisi-2);
	printf("Toplam %d adet arac giris yapti\n",aracsayisi);
	printf(" Ortalama = %d, Kirpilmis ortalama = %d",ortalama,kirpilmis);
	getchar();
}
