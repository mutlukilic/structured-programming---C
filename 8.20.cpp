#include<stdio.h>
int main( void )
{
	int i,j,m,max,max2;
	
	
	for(i=99;i>9;i--){
		m=1;
		for(j=2;j<i;j++){
			if(i%j==0){
				m=0; break;                                //11,13,17,19,23,29,31,37
			}
		}
		if(m == 1 ){
			max2 = max;
			max = i;
		}
		if( max2-max == 2){
			printf("Aradiginiz sayilar= %d ve %d",max,max2);
			break;
		}
	}
	return 0;
}
