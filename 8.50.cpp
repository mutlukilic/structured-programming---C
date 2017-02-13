#include<stdio.h>
int main()
{
	int baslangic,sayi;
	
	printf("Baslangic sayisini giriniz:");
	scanf("%d",&baslangic);
	
	while(1)
	{
		printf("Bir sayi giriniz(bir onceki sayiyi girerseniz durur):  ");
		scanf("%d",&sayi);
		if(sayi>baslangic)
		{
			printf("ARTIYOR\n");
		}
		else
		{
			if(sayi<baslangic)
			{
				printf("AZALIYOR\n");
			}
		}
		if(sayi==baslangic)
		{
			break;
		}
		else
		{
			baslangic=sayi;
		}
	}
	return 0;
}
