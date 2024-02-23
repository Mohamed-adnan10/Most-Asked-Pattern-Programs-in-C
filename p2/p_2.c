#include <stdio.h>

int main (void)
{
    unsigned int rows;
    unsigned int columns;
    unsigned int count1;
    unsigned int count2;

    printf("enter number of rows :");
    scanf("%d" ,&rows);
    printf("enter number of columns :");
    scanf("%d" ,&columns);

    for(count1 = 1; count1 <= rows; count1++)
    {
        for (count2 = 1; count2 <=columns; count2++)
        {
            if( (count1 == 1) || (count1 == rows) || (count2 == 1) || (count2 == columns) )
            {
            printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}

/*
enter number of rows :5
enter number of columns :5
* * * * * 
*       *
*       *
*       *
* * * * *

*/