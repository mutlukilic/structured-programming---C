#include <stdio.h>

int main()
{
	int sayi1,sayi2,sayac=0;
	
	printf("OBEB bulunacak sayilari giriniz= ");
	scanf("%d %d",&sayi1,&sayi2);
	while(sayi1<0 || sayi2<0)
	{
		printf("Yanlis!!! Lutfen sayilarin her ikisini de pozitif olarak\ngiriniz\n");
		printf("OBEB bulunacak sayilari giriniz= ");
		scanf("%d %d",&sayi1,&sayi2);
	}
	printf("------------------------------------\n");
	printf("OBEB(%d,%d) = ",sayi1,sayi2);
	while(sayi1!=sayi2)
	{
		if(sayi1 > sayi2)
		{
			sayi1=sayi1-sayi2;
		}
		else
		{
			sayi2=sayi2-sayi1;
		}
		sayac++;
	}
	printf("%d\n",sayi1);
	printf("OBEB cikarma zinciri = %d",sayac);
	getchar();
}
