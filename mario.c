#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    int n,i,j,k,s;
    
    do	
	{
    	printf("Enter height:\n");
	    scanf("%d",&n);
	}	while(n<1 || n>8);
	
	for(i=1;i<=n;i++)
	{
			for(k=n-i;k>=1;k--)
			{
				printf(" ");
			}
			
			for(s=1;s<=i;s++)
			{
				printf("#");
			}
			printf("");
		
		for(k=2;k>=1;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
			{
				printf("#");
			}
				printf("\n");
				
	}
}
    
