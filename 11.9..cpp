#include<stdio.h>
#include<math.h>
float gunubul(float dizi[],float fark[],float eleman)
{
	int i,adet=1;
	float ortalama,toplam=0,enbuyuk;
	for(i=0;i<eleman;i++)
	{
		toplam=toplam+dizi[i];
	}
	ortalama=toplam/eleman;
	printf("Ortalama %.2f",ortalama);
	for(i=0;i<eleman;i++)
	{
		fark[i]=dizi[i]-ortalama;
	}
	enbuyuk=fark[0];
	for(i=0;i<eleman;i++)
	{
		if(fark[i]>enbuyuk)
		{
			enbuyuk=fark[i];
			adet++;
		}
	}
	return adet;
}
int main( void )
{
	int gun,i;
	float farkk[10],a[10];
	printf("ALtýn son 10 gunluk degerlerini giriniz: ");
	for(i=0;i<10;i++)
	{
		scanf("%f",&a[i]);
	}
	gun=gunubul(a,farkk,10);
	printf("\n%d. gunde",gun);
	return 0;
}
