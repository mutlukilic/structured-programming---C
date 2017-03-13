#include<stdio.h>
int main( void )
{
	float a[5],b[5],c[10];
	int i,j,k=5;
	double ortalama,toplam=0;
	printf("a dizisinin degerlerini giriniz: ");
	for( i=0;i<5;i++ )
	{
		scanf("%f",&a[i]);
		c[i]=a[i];
	}
	printf("b dizisinin elemanlarýný giriniz: ");
	for(j=0;j<5;k++,j++)
	{
		scanf("%f",&b[j]);
		c[k]=b[j];
	}
	for(i=0;i<10;i++)
	{
		toplam=toplam+c[i];
	}
	ortalama=toplam/10;
	printf("dizilerin ortalamasi %.2f",ortalama);
	printf("c dizisinin elemanlari:\n ");
	for(i=0;i<10;i++)
	{
		if( c[i]>=ortalama)
		{
			printf("%.1f ",c[i]);
		}
	}
	return 0;
}
