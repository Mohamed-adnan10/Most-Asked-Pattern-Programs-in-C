#include <stdio.h>

int main (void)
{
    unsigned int size;
    unsigned int count1;
    unsigned int count2;
    unsigned int count3;
    int i = 0;
    int *ptr = &i;

    printf("enter number of size :");
    scanf("%d" ,&size);

    for(count1 = 1; count1 <= size; count1++)
    {
        for (count2 = size; count2 >= count1; count2--)
        {
                printf("  ");
        }
        for (count3 = 1; count3 < (count1*2); count3++)
        {
            if (count3 <= (count1*2)/2)
            {
                printf("%i ",count3);
                *ptr= count3;
            }
            else if ( (count3 > ((count1*2)/2)) )
            {
                printf("%i ",i-=1);
            }
            else 
            {
            }
        }
        printf("\n");
        
    }
    return 0;
}

/*

enter number of size :5
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
  
*/