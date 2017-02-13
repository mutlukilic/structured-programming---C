#include<stdio.h>
int main()
{
	int sayi,sayac=0,tek=0,cift=0;
	
	printf("Sayi: ");
	scanf("%d",&sayi);
	while(sayi<=100)
	{
		sayac++;
		if(sayi<10)
		{
			tek++;
		}
		else
		{
			cift++;
		}
		printf("Sayi: ");
		scanf("%d",&sayi);
	}
	printf("Girilen %d sayinin %d tanesi tek basamakli, %d tanesi iki basamaklidir.",sayac,tek,cift);
	
	return 0;
}
