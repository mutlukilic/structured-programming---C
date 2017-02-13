#include <stdio.h>

int main()
{
	int sayi1,sayi2,OKEK;
	
	printf("OKEK bulunacak sayilari giriniz= ");
	scanf("%d %d",&sayi1,&sayi2);
	while(sayi1<0 || sayi2<0)
	{
		printf("Yanlis!!! Lutfen sayilarin her ikisini de pozitif olarak\ngiriniz\n");
		printf("OKEK bulunacak sayilari giriniz= ");
		scanf("%d %d",&sayi1,&sayi2);
	}
	printf("-------------------------------\n");
	printf("OKEK(%d,%d) = ",sayi1,sayi2);
	OKEK=sayi1*sayi2;
	while(sayi1!=sayi2)
	{
		if(sayi1 > sayi2){
			sayi1=sayi1-sayi2;
		}
		else{
			sayi2=sayi2-sayi1;
		}
	}
	printf("%d",OKEK/sayi1);
	getchar();
}
