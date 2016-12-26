#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int icindeNoktaBul(int,int,int,int *,int *);

int main()
{
	int mx=2,my=5,r=6;
	int x,y;
	icindeNoktaBul(mx,my,r,&x,&y);
	printf("x,y = %d/%d",x,y);
	return 0;
}
int icindeNoktaBul(int mx,int my,int r,int *xp,int *yp)
{
	srand(time(NULL));
	*xp=mx-r+rand()%13;
	*yp=my-r+rand()%13;
}
