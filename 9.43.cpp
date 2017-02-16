#include<stdio.h>
int sagdanenbuyuk(int);
int main()
{
	int sayi;
	
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("%d",sagdanenbuyuk(sayi));
	return 0;
}
int sagdanenbuyuk(int sayi)
{
	int a,enbuyuk=0,sayac=0;
	
	while(sayi!=0)
	{
		a=sayi%10;
		if(a>enbuyuk)
		{
			enbuyuk=a;
			sayac++;
		}
		sayi/=10;
	}
	return sayac;
}
