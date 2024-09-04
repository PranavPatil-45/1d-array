#include <stdio.h>
#include<conio.h>

void main() 
{
    int n, i, max;

    
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

   
    max = a[0];

   
    for (i = 1; i < n; i++) 
	{
        if (a[i] > max) 
		{
            max = a[i];
        }
    }

    
    printf("Maximum element in the array is: %d\n", max);

}

