#include<stdio.h>
int ayristir(int);
int main( void )
{
	int sayi;
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	ayristir(sayi);
	return 0;
}
int ayristir(int sayi)
{
	int saat,dakika,saniye;
	saat=sayi/3600;
	dakika=(sayi-(saat*3600))/60;
	saniye=sayi-(saat*3600)-(dakika*60);
	printf("%d:%d:%d",saat,dakika,saniye);
}
