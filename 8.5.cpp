#include<stdio.h>
int main()
{
	int bas,bitis,sayac=0,i;
	
	printf("Baslangic ve bitis degerini giriniz: ");
	scanf("%d%d",&bas,&bitis);
	printf("Sayilar sunlardir:\n");
	while(bas <= bitis){
		if(bas % 2 == 0){
			printf("%d,",bas);
			sayac++;
		}
		bas++;
	}
	printf("(Toplam %d adet)",sayac);
	return 0;
}
