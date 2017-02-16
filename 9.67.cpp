#include <stdio.h>
#include <math.h>

int dikucgen(int,int,int);

int main()
{
	printf("%d\n",dikucgen(3,4,5));
	printf("%d\n",dikucgen(4,6,8));
	getchar();
}
int dikucgen(int a,int b,int c)
{
	if(pow(a,2)+pow(b,2)==pow(c,2)){
		return 1;
	}
	else{
		return 0;
	}
}
