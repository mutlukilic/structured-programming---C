#include<stdio.h>
#include<math.h>

float noktakaydir(float *,float *,float,int,int);

int main ( void ){
	float x = 2.5,y = 2.5,msf;
	int yatay = 5,dusey = 4;
	msf = noktakaydir(&x,&y,msf,yatay,dusey);
	printf("%.2f,%.2f,%.2f",x,y,msf);
	return 0;
}

float noktakaydir(float *xp,float *yp,float msfp,int yatay,int dusey){
	int i;
	*xp = (*xp)+yatay;
	*yp = (*yp)+dusey;
	i = pow(yatay,2)+pow(dusey,2);
	msfp = sqrt(i);
	return msfp;
}
