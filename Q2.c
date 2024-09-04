#include <stdio.h>
#include<conio.h>

void main() 
{
    int n, i;
    float sum = 0.0, average;

    
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];


    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n; i++) 
	{
        sum += a[i];
    }

    
    average = sum / n;

   
    printf("Average of the array: %.2f\n", average);

}

