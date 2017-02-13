#include<stdio.h>
int main( void )
{
	int sayilar,adetsayisi,sayac=0,top=0;
	int i;
	printf("kac adet sayi gireceksiniz: ");
	scanf("%d",&adetsayisi);
	while(adetsayisi<0 || adetsayisi==0)
	{
		printf("Hata!!\n");
		printf("Adet sayisi sifir yada negatif olamaz\n");
		printf("kac adet sayi gireceksiniz: ");
		scanf("%d",&adetsayisi);
	}
	printf("sayilari giriniz: ");
	for(i=1;i<=adetsayisi;i++)
	{
		scanf("%d",&sayilar);
		if(sayilar%8==0 || sayilar%13==0)
		{
			top=top+sayilar;
			sayac++;
		}
	}
	printf("Kurala uyan toplamda %d adet sayi girdiniz:",sayac);
	printf("Toplamlari = %d",top);
	return 0;
}
