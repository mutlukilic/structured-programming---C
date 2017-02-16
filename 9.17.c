#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int zamanUret(char);
int main( void )
{
	zamanUret('s');
}
int zamanUret(char secim)
{
	int saat,dakika,saniye;
	srand(time(NULL));
	if(secim=='s')
	{
		saat=8+rand()%3;
		dakika=rand()%60;
		saniye=rand()%60;
		printf("%d:%d:%d",saat,dakika,saniye);
	}
	if(secim=='o')
	{
		saat=11+rand()%5;
		dakika=rand()%60;
		saniye=rand()%60;
		printf("%d:%d:%d",saat,dakika,saniye);
	}
	if(secim=='a')
	{
		saat=16+rand()%7;
		dakika=rand()%60;
		saniye=rand()%60;
		printf("%d:%d:%d",saat,dakika,saniye);
	}
}
