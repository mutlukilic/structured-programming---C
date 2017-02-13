#include<stdio.h>
int main( void )
{
	int kirmizi=0,yesil=0,sari=0,siyah=0,i;
	int kod;
	while(1)
	{
		printf("Kod giriniz(1,2,3,4 yada cikmak icin 111) : ");
		scanf("%d",&kod);
		if(kod>4 && kod!=111)
		{
			printf("Hata!!Lutfen gecerli bir kod giriniz\n");
		}
		if(kod==1)
		{
			kirmizi++;
		}
		if(kod==2)
		{
			yesil++;
		}
		if(kod==3)
		{
			sari++;
		}
		if(kod==4)
		{
			siyah++;
		}
		if(kod==111)
		{
			break;
		}
	}
	printf("Gun sonu satis raporu\n");
	printf("%d kirmizi,%d yesil , %d sari , %d siyah oje satilmiştir.",kirmizi,yesil,sari,siyah);
	return 0;
	
}
