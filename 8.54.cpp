#include <stdio.h>
#include <math.h>

int main()
{
	int saat,dakika,saaton,saatbir;
	int dakikaon,dakikabir,sayi,ilginc;
	
	/*for(saat=0;saat<24;saat++)
	{
		saaton=saat/10;
		saatbir=saat%10;
		for(dakika=0;dakika<60;dakika++)
		{            //Bu yollada yapılabilir.
			dakikaon=dakika/10;
			dakikabir=dakika%10;
			sayi=(saaton*1000)+(saatbir*100)+(dakikaon*10)+dakikabir;
			ilginc=pow((saaton*10+saatbir),2)+pow((dakikaon*10+dakikabir),2);
			if(sayi==ilginc)
			{
				printf("Hocanin gosterdigi saat -> %d%d:%d%d\n",saaton,saatbir,dakikaon,dakikabir);
			}
		}
	}*/
	for(saaton=0;saaton<3;saaton++)
	{
		for(saatbir=0;saatbir<10;saatbir++)
		{
			for(dakikaon=0;dakikaon<6;dakikaon++)
			{
				for(dakikabir=0;dakikabir<10;dakikabir++)
				{
					sayi=(saaton*1000)+(saatbir*100)+(dakikaon*10)+dakikabir;
					ilginc=pow((saaton*10+saatbir),2)+pow((dakikaon*10+dakikabir),2);
					if(sayi==ilginc)
					{
						if(saaton*10+saatbir>7 && saaton*10+saatbir<18)
						{
							printf("Hocanin gosterdigi saat -> %d%d:%d%d\n",saaton,saatbir,dakikaon,dakikabir);
						}
					}
				}
			}
		}
	}
	getchar();
}
