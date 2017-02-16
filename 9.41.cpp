#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int paraat(int,char);
int main()
{
	printf("\nİlk cagriliyor.\n");
	paraat(100,'T');
	printf("\nİkinci cagriliyor.\n");
	paraat(500,'Y');
	return 0;
}
int paraat(int atim,char secim)
{
	int x,yazi=0,tura=0,i;
	srand(time(NULL));
	for(i=0;i<atim;i++)
	{
		x=rand()%2;
		if(x==0)
		{
			yazi++;
		}
		else
		{
			tura++;
		}
	}
	if(secim=='T')
	{
		printf("%d\n",tura);
	}
	else
	{
		printf("%d\n",yazi);
	}
}
