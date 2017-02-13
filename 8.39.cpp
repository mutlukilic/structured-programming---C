#include<stdio.h>
int main( void )
{
	int bolsayi,i,toplam=1;
	
	
	printf("Sayiyi giriniz : ");
	scanf("%d",&bolsayi);
	for(i=2;i<=(bolsayi/2);i++)
	{
		if(bolsayi%i==0)
		{
			toplam=toplam+i;
		}
	}
	printf("------------------------------------\n");
	if(toplam>bolsayi)
	{
		printf("Girilen sayi bol sayidir");
	}
	else
	{
		printf("Girilen sayi bol sayi degildir");
	}
	return 0;
}
