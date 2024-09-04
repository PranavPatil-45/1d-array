#include <stdio.h>
#include<conio.h>

void main()
 {
    int n, i;

    
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    
    printf("Enter array A's elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    
    printf("Enter array B's elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    

    
    for (i = 0; i < n; i++) 
	{
        c[i] = a[i] + b[i];
    }
    printf("\n");
    
    printf("Array C is: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", c[i]);
    }
    printf("\n");

}

