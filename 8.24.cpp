#include<stdio.h>
int main()
{
	int toplam=0,sayac=0,bas,bitis;
	printf("Baslangic degerini giriniz : ");
	scanf("%d",&bas);
	printf("Bitis degerini giriniz : ");
	scanf("%d",&bitis);
	while(bas==bitis || bas>bitis)
	{
		printf("Hata!!\n");
		printf("Bitis degeri baslangic degerinden kucuk ya da esit olamaz\n");
		printf("Baslangic degerini giriniz : ");
		scanf("%d",&bas);
		printf("Bitis degerini giriniz : ");
		scanf("%d",&bitis);
	}
	for(int i=bas;i<=bitis;i++)
	{
		if(i%3==0 || i%11==0)
		{
			printf("%d, ",i);
			sayac++;
			toplam+=i;
		}
	}
	printf("\nKurala uyan toplamda %d adet sayi bulunmaktadir\n",sayac);
	printf("Toplamlari = %d",toplam);
	return 0;
}
