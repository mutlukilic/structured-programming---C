#include<stdio.h>
#include<math.h>
int main( void )
{
	int a,b,c,d,sayi,ilginc;
	printf("Sayilar= ");
	for(a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(d=0;d<10;d++)
				{
					sayi=a*1000+b*100+c*10+d;
					ilginc=pow(((a*10+b)+(c*10+d)),2);
					if(sayi==ilginc)
					{
						printf("%d, ",sayi);
					}
				}
			}
		}
	}
	return 0;
}
