#include <stdio.h>

int main() {
    int i,j,n=5,px=1,py=n*2-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                printf("*");
            
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                printf("*");
            
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
     printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j==px||j==py)
                printf("*");
            else
            printf(" ");
        }
        px++;
        py--;
        printf("\n");
    }
    return 0;
}
