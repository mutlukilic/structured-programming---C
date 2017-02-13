#include<stdio.h>
int main()
{
	int tasikardi=0,kucuk=1000,nabiz;
	char secim;
	
	printf("Nabiz  degerlendirme programina hosgeldiniz\n");
	printf("(Sonlandirmak icin kategoriye b:bitir veya nabiz degerini\n0 giriniz)\n");
	printf("-----------------------------------------------\n");
	while(1)
	{
		printf("Yas grubu (y:yetiskin, c:cocuk) ve nabiz degeri: ");
		scanf("%s %d",&secim,&nabiz);
		if(secim=='b' || nabiz==0)
		{
			printf("----------------------------------------------------\n");
			printf("Program sona erdi\n");
			break;
		}
		if((secim!='c' || secim!='y') && nabiz<0)
		{
			printf("Yanlis kategori veya nabiz degeri\n");
		}
		if((secim=='c' || secim=='y' ) && nabiz>0)
		{
			if(secim=='c')
			{
				if(nabiz<80)
				{
					printf("Nabiz dusuk (Bradikardi)\n");
					if(nabiz<kucuk)
					{
						kucuk=nabiz;
					}
				}
				if(nabiz>=80 && nabiz<=100)
				{
					printf("Nabiz normal\n");
				}
				if(nabiz>100)
				{
					printf("Nabiz yuksek (Tasikardi)\n");
				}
			}
			if(secim=='y')
			{
				if(nabiz<60)
				{
					printf("Nabiz dusuk (Bradikardi)\n");
				}
				if(nabiz>=60 && nabiz<=100)
				{
					printf("Nabiz normal\n");
				}
				if(nabiz>100)
				{
					printf("Nabiz yuksek (Tasikardi)\n");
					tasikardi++;
				}
			}
		}
	}
	printf("Cocuklarda en dusuk nabiz degeri: %d\n",kucuk);
	printf("Yetiskinlerde tasikardi sayisi  :  %d",tasikardi);
	return 0;
}
