#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tarihuret(int x,char harf)
{
	int i,j;
	int gun,ay,yil;
	srand(time(NULL));

	switch(harf)
	{
		case'i':
			for(j=1;j<=x;j++)
			{
				gun=1+rand()%30;
				ay=9+rand()%3;
				yil=2016+rand()%51;
				printf("%d/%d/%d\n",gun,ay,yil);	
			}
			break;
		case 's':
			for(i=1;i<=x;i++)
			{
				gun=1+rand()%30;
				ay=3+rand()%3;
				yil=2016+rand()%51;
				printf("%d/%d/%d\n",gun,ay,yil);
			}
			break;
		
	}
}
int main(void)
{
	int sayi;
	char kelime;
	printf("harfi giriniz: ");
	scanf("%c",&kelime);
	printf("sinir degerini giriniz: ");
	scanf("%d",&sayi);

	tarihuret(sayi,kelime);
	
	return 0;
}
