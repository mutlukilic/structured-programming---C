#include <stdio.h>

int main()
{
	int sayi,direnc,sayac,i;
	for(i=10;i<100;i++)
	{
		sayac=1;
		sayi=i;
		while(1)
		{
			direnc=(sayi/10)*(sayi%10);
			if(direnc>9)
			{
				sayac++;
				sayi=direnc;
			}
			else
			{
				break;
			}
		}
		printf("%d sayisinin carpim direnci=%d\n",i,sayac);
	}
	getchar();
}
