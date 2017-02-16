#include<stdio.h>
#include<math.h>
float uzaklik(int,int,int,int);
int main()
{
	printf("Uzaklik= %.2f",uzaklik(8,6,2,7));
	return 0;
}
float uzaklik(int x1,int y1,int x2,int y2)
{
	float mesafe;
	
	mesafe=pow((x2-x1),2)+pow((y2-y1),2);
	return sqrt(mesafe);
}
