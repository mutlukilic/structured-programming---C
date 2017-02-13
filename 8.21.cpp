#include<stdio.h>
int main()
{
	int kodlar;
	float top=0;
	
	printf("Kalemlerin urun kodlarini girin (Durdurmak icin 111) : \n");
	while(kodlar!=111)
	{
		scanf("%d",&kodlar);
		if(kodlar==11)
		{
			top+=1.5;
		}
		if(kodlar==12)
		{
			top+=2.5;
		}
		if(kodlar==13)
		{
			top+=3;
		}
		if(kodlar==14)
		{
			top+=4.5;
		}
		if(kodlar==15)
		{
			top+=5;
		}
	}
	printf("Gun sonu Satis Kazanci: %.2f TL dir.",top);
	
	return 0;
}
