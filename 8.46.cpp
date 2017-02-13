#include<stdio.h>
int main()
{
	int sayi1,sayi2,sayi3;
	int sayac1=0,sayac2=0,sayac3=0;
	
	while(1)
	{
		printf("Uc sayi giriniz: ");
		scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
		if(sayi1==sayi2 && sayi2==sayi3)
		{
			printf("Program Bitti\n");
			break;
		}
		if(sayi1<sayi2 && sayi2<sayi3)
		{
			printf("Girilenler artan sirada dizilmis\n");
			sayac1++;
		}
		if(sayi1>sayi2 && sayi2>sayi3)
		{
			printf("Girilenler azalan sirada dizilmis\n");
			sayac2++;
		}
		if((sayi1<sayi2 && sayi2>sayi3) || (sayi1>sayi2 && sayi2<sayi3))
		{
			printf("Girilenler karisik sirada dizilmis\n");
			sayac3++;
		}
	}
	printf("Girilen dizilerden %d tanesi artan, %d tanesi azalan, %d tanesi karisik siradadir",sayac1,sayac2,sayac3);
	return 0;
}
