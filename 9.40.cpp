#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int noktaBul(int,int,int,int);
int main()
{	/*
	int x1,y1,x2,y2;
	printf("Sol ust kose koordinatlarini giriniz: ");
	scanf("%d %d",&x1,&y1);
	printf("Sag aly kose koordinatlarini giriniz: ");
	scanf("%d %d",&x2,&y2);
	noktaBul(x1,y1,x2,y2);
	*/
	noktaBul(-2,3,2,-2);                           //verileri klavyedende alabilirsiniz.
	return 0;
}
int noktaBul(int x1,int y1,int x2,int y2)
{
	int x3,y3,yedek;
	srand(time(NULL));
	if(x1<x2)
	{
		yedek=x1;
		x1=x2;
		x2=yedek;
	}
	if(y1<y2)
	{
		yedek=y1;
		y1=y2;
		y2=yedek;
	}
	x3=x2+rand()%x1-x2+1;
	y3=y2+rand()%y1-y2+1;
	printf("Nokta=( %d , %d )",x3,y3);
}
