/**
 * C program to print X star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, N;
    int count;

    printf("Enter N: ");
    scanf("%d", &N);
    
    for (i=0;i<18;i++){
        printf("*");

    }
    

    count = N * 2 - 1;
   
    for(i=1; i<=count; i++)
    {
        printf("*");
        
        for(j=1; j<=count; j++)
        {
            if(j==i || (j==count - i + 1))
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
    for (i=0;i<18;i++){
        printf("* ");

    }
    printf("\n");
   

    return 0;
}