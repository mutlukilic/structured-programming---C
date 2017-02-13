#include<stdio.h>
#include<math.h>
int main( void )
{
	int sekizlik,onluk=0,a,i;
	
	
	printf("Sekizlik tabanda sayi giriniz: ");
	scanf("%d",&sekizlik);
	printf("----------------------------------\n");
	for(i=0;sekizlik!=0;i++)
	{
		a=sekizlik%10;
		onluk=onluk+(a*(pow(8,i)));
		sekizlik/=10;
	}
	printf("Onluk tabandaki karsiligi : %d",onluk);
	return 0;
}
