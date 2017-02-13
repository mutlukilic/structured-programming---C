#include<stdio.h>
int main( void )
{
	int kenaruzunluk,sayac1,sayac2;
	printf("kenaruzunlugunu giriniz(1 ile 20 arasinda): ");
	scanf("%d",&kenaruzunluk);
	for(sayac1=kenaruzunluk;sayac1>0;sayac1--)
	{
		for(sayac2=kenaruzunluk;sayac2>0;sayac2--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
