#include<stdio.h>
int isaretbul(int);
int main( void )
{
	int sayi;
	
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("Sonuc= %d",isaretbul(sayi));
	return 0;
}
int isaretbul(int sayi)
{
	if(sayi<0)
	{
		return -1;
	}
	if(sayi>0)
	{
		return 1;
	}
	if(sayi==0)
	{
		return 0;
	}
}
