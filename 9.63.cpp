#include <stdio.h>

int ahbapBul(int);

int main()
{
	printf("%d\n",ahbapBul(28));
	printf("%d\n",ahbapBul(140));
	return 0;
}
int ahbapBul(int sayi)
{
	int top=0,i,j;
	float oran,oran2;
	
	for(j=1;j<=sayi;j++)
	{
		if(sayi%j==0){
			top += j;
		}
	}
	oran=(float)top/sayi;
	for(i=sayi-1;i>=1;i--)
	{
		top=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0){
				top += j;
			}
		}
		oran2=(float)top/i;
		if(oran==oran2){
			return i;
			break;
		}
	}
	return 0;
}
