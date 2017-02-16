#include <stdio.h>
#include <math.h>

void birbirineEnYakin(int,int,int,int,int,int);

int main()
{
	birbirineEnYakin(3,3,7,7,9,9);
	return 0;
}
void birbirineEnYakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	float mesafe1,mesafe2,mesafe3;
	mesafe1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	mesafe2=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	mesafe3=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	if(mesafe3<mesafe2 && mesafe3<mesafe1){
		printf("(%d,%d)-(%d,%d)",x2,y2,x3,y3);
	}
	if(mesafe2<mesafe1 && mesafe2<mesafe3){
		printf("(%d,%d)-(%d,%d)",x1,y1,x3,y3);
	}
	if(mesafe1<mesafe2 && mesafe1<mesafe3){
		printf("(%d,%d)-(%d,%d)",x1,y1,x2,y2);
	}
}
