#include<stdio.h>
int en_buyuk(int,int,int);
int main()
{
	int sayi1,sayi2,sayi3;
	
	printf("Sayilari giriniz: ");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	printf("En buyugu= %d",en_buyuk(sayi1,sayi2,sayi3));
	return 0;
}
int en_buyuk(int sayi1,int sayi2,int sayi3)
{
	if(sayi1>sayi2 && sayi1>sayi3)
	{
		return sayi1;
	}
	if(sayi2>sayi1 && sayi2>sayi3)
	{
		return sayi2;
	}
	if(sayi3>sayi1 && sayi3>sayi2)
	{
		return sayi3;
	}
}
