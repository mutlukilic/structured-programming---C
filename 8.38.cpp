#include<stdio.h>
int main( void )
{
	int noksan,i,toplam=1;
	printf("Sayiyi giriniz : ");
	scanf("%d",&noksan);
	for(i=2;i<=(noksan/2);i++)
	{
		if(noksan%i==0)
		{
			toplam=toplam+i;
		}
	}
	printf("------------------------------------\n");
	if(toplam<noksan)
	{
		printf("Girilen sayi noksan sayidir");
	}
	else
	{
		printf("Girilen sayi noksan sayi degildir");
	}
	return 0;
}
