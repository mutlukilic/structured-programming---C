#include <stdio.h>
#include <math.h>

int icindemi(int,int,int,int,int);

int main()
{
	printf("%d\n",icindemi(3,3,4,5,11));
	printf("%d\n",icindemi(3,3,4,5,1));
	return 0;
}
int icindemi(int x,int y,int mrkzx,int mrkzy,int r)
{
	float mesafe;
	
	mesafe=sqrt(pow((x-mrkzx),2)+pow((y-mrkzy),2));
	if(mesafe <= r){
		return 1;
	}
	else{
		return 0;
	}
}
