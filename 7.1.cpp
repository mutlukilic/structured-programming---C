#include<stdio.h>
int main( void )
{
	int vizepuani,finalpuani,devampuani;
	float ortalamapuani;
	printf("Arasinav puanini giriniz: "); 
	scanf("%d",&vizepuani);
	printf("Son sinav puanini giriniz: ");
	scanf("%d",&finalpuani);
	printf("Devam puanini giriniz: ");
	scanf("%d",&devampuani);
	ortalamapuani=vizepuani*0.4+finalpuani*0.5+devampuani*0.1; //ortalama notunu hesaplarız.
	printf("Ortalama puaniniz : %.2f\n",ortalamapuani);
	if( ortalamapuani>=60 )
	{
		printf("Tebrikler gectiniz ");
	}
	else
	{
		printf("Butlerde gorusuruz ");
	}
	return 0;
}
