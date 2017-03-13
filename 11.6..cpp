#include<stdio.h>
int main( void )
{
	int a[10],i,k,p;
	double ortalama,toplam=0;
	printf("a dizisinin elemanlarini giriniz: ");
	for( i=0;i<10;i++ )
	{
		scanf("%d",&a[i]);
		toplam=toplam+a[i];
    }
	ortalama=toplam/10.0;
	printf("dizinin ortalamasi %.2f\n",ortalama);
	printf("ortalamadan kucuk olanlar\n");
	for( i=0;i<10;i++ )
	{
		if( a[i]<ortalama )
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
