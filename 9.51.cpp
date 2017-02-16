#include<stdio.h>
int rakamsay(int);
int main()
{
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("%d",rakamsay(sayi));
	return 0;
}
int rakamsay(int sayi)
{
	int sayac=0;
	while(sayi!=0)
	{
		sayac++;
		sayi/=10;
	}
	return sayac;
}
