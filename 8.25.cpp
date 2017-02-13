#include<stdio.h>
int main()
{
	int kar=0,zarar=0,alis,satis;
	
	printf("XX Ithalat-Ihracat Sirketi Kar/Zarar Programi\n");
	printf("-------------------------------------------------\n");
	while(1)
	{
		printf("Alis ve satis degerlerini giriniz : ");
		scanf("%d %d",&alis,&satis);
		if(alis==0 || satis==0)
		{
			printf("------------------------------------------------\n");
			printf("Program sona erdi\n");
			break;
		}
		if(alis>satis)
		{
			printf("   (Zarar orani %.2f)\n",(float)(alis-satis)/alis);
			zarar++;
		}
		else
		{
			printf("   (Kar orani %.2f)\n",(float)(satis-alis)/alis);
			kar++;
		}
	}
	printf("Toplam da %d islemden kar, %d islemden zarar edilmistir.",kar,zarar);
	return 0;
}
