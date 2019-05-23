#include <stdio.h>

int main()
{
    int n[10];
    int i;
    int small, large, total = 0;
    float average;
    
    for (i=0;i<10;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",&n[i]);
        total += n[i];
    }
    
    small = n[0];
    large = n[0];
    
    for (i=1;i<10;i++)
    {
        if(n[i] < small)
        {
            small = n[i];
        }
    }
    
    for (i=1;i<10;i++)
    {
        if(n[i] > large)
        {
            large = n[i];
        }
    }
    
    average = 1.0 * total / 10;
    
    printf("Smallest Integer: %d\n",small);
    printf("Largest Integer: %d\n",large);
    printf("Total: %d\n",total);
    printf("Average: %.2f\n",average);
    
    return 0;
}
