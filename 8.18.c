#include<stdio.h>
int main()
{
	int kisi,i,yas;
	float toplam=0;
	
	printf("Ailedeki birey sayisi kac?\n");
	scanf("%d",&kisi);
	printf("%d kisinin yaslarini giriniz:\n",kisi);
	for(i=0;i<kisi;i++)
	{
		scanf("%d",&yas);
		if(yas>0 && yas<11)
		{
			toplam++;
		}
		if(yas>10 && yas<18)
		{
			toplam+=1.5;
		}
		if(yas>17 && yas<27)
		{
			toplam+=4.75;
		}
		if(yas>26 && yas<51)
		{
			toplam+=7;
		}
		if(yas>51)
		{
			toplam+=5.25;
		}
	}
	printf("Odenecek toplam ucret %.2f TL",toplam);
	
	return 0;
}
