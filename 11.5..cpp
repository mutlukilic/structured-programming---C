#include<stdio.h>

int en_kucuk_bul(int dizi[],int eleman)
{
	int i,enkucuk,adet=0;
	enkucuk=dizi[0];
	for(i=0;i<eleman;i++)
	{
		if( dizi[i]<enkucuk )
		{
			enkucuk=dizi[i];
			adet++;
		}
	}
	printf("%d ",adet);
	return enkucuk;
}

int main( void )
{
	int i,kucuk,a[10];
	printf("a dizisinin elemanlarini giriniz: ");
	for( i=0;i<10;i++ )
	{
		scanf("%d",&a[i]);
	}
	
	kucuk=en_kucuk_bul( a , 10 );
	
	printf("\ndizinin en kucuk elemani %d",kucuk);
	
	return 0;
	
}
