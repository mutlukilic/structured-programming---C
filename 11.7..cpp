#include<stdio.h>
int main( void )
{
	float c[10],a[6],b[4];
	int i,adet=0,k=0,p=0;
	double ortalama,toplam=0;
	
	printf("c dizisinin elemanlarini giriniz: ");
	for( i=0;i<10;i++ )
	{
		scanf("%f",&c[i]);
		toplam=toplam+c[i];
	}
	ortalama=toplam/10;
	printf("dizinin ortalamasi %.2f\n",ortalama);
	printf("b dizisinin elemanlari(Ortalamadan kucukler):\n");
	for(i=0;i<10;k++,i++)
	{
		if( c[i]<ortalama )
		{
			b[k]=c[i];
			printf("%.1f ",b[k]);
		}
	}
	printf("\na dizisinin elemanlari(ortalamadan buyukler):\n");
	for(i=0;i<10;p++,i++)
	{
		if(c[i]>ortalama)
		{
			a[p]=c[i];
			printf("%.1f ",a[p]);
		}
	}
	
	return 0;
}
