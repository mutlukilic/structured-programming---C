#include <stdio.h>

int main()
{
	int a,b,c,i;
	int sayi1,sayi2,kucuk,yedek1,yedek2;
	
	for(a=1;a<10;a++)
	{
		for(b=1;b<10;b++)
		{
			if(a==b){
				continue;
			}
			sayi1 = a*10+b;
			yedek1 = sayi1;
			for(c=1;c<10;c++)
			{
				if(b==c){
					continue;
				}
				sayi2 = b*10+c;
				yedek2 = sayi2;
				kucuk = yedek1;
				if(sayi1 > sayi2){
					kucuk = yedek2;
				}
				for(i=kucuk;i>=2;i--){
					if(sayi1 % i == 0 && sayi2 % i == 0){
						yedek1 /= i;
						yedek2 /= i;
						i = 1;
					}
				}
				if(yedek1 == a && yedek2 == c){
					printf("%d / %d = %d / %d\n",sayi1,sayi2,a,c);
				}
			}
		}
	}
	return 0;
}
