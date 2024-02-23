#include <stdio.h>

int main (void)
{
    unsigned int size;
    unsigned int count1;
    unsigned int count2;
    unsigned int count3;

    printf("enter number of size :");
    scanf("%d" ,&size);

    for(count1 = 1; count1 <= size; count1++)
    {
        for (count2 = size; count2 >= count1; count2--)
        {
                printf("  ");
            
        }
        for (count3 = 1; count3 <= count1; count3++)
        {
            if((count3 == 1) || (count3 == count1) || (count1 == size))
            {
                printf("*   ");
            }
            else
            {
                printf("    ");
            }
        
        }
        printf("\n");
        
    }
    return 0;
}

/*

enter number of size :5
          *   
        *   *
      *       *
    *           *
  *   *   *   *   *

*/