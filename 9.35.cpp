#include<stdio.h>
#include<math.h>
int alanbul(int,int,int,int);
int main()
{
	int c;
	
	c=alanbul(-2,3,2,-2);
	printf("%d\n",c);
	return 0;
}
int alanbul(int x1,int y1,int x2,int y2)
{
	int alan;
	
	alan=(fabs(x1)+fabs(x2))*(fabs(y1)+fabs(y2));
	return alan;
}
