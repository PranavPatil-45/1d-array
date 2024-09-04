#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	
    printf("Enter  Size of arrya:");
    scanf("%d",&n);
    printf("\n");
    
    int x[n];
    
    for(i=0;i<n;i++)
    {
    	printf("Enter A x[%d]:",i);
    	scanf("%d",&x[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		printf("x[%d]=%d",i,x[i]);
		printf("\n");

	}
	printf("\n");
	
	printf("Length of an Array:%d",n);
    
    
}
