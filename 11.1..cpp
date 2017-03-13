#include<stdio.h>
int main( void )
{
	int a[6],i,j;
	
	printf("diziyi giriniz: ");
	
	for(i=0;i<6;i++)
	{
		
		scanf("%d",&a[i]);
	}
    
	for( i=0;i<6;i++)
	{
		for(j=1;j<=a[i];j++)
	    {
			
		
			printf("*");
			
		

	    }
	    printf("\n");
	}
    
	 
	
	return 0;
}
