#include <stdio.h>

int main (void)
{
    unsigned int size;
    unsigned int count1;
    unsigned int count2;
    int i = 0;
    int *ptr = &i;

    printf("enter number of size :");
    scanf("%d" ,&size);

    for(count1 = 1; count1 <= size; count1++)
    {
        for (count2 = 1; count2 < (count1*2); count2++)
        {
            if (count2 <= (count1*2)/2)
            {
                printf("%i " ,count2);
                *ptr = count2;
                
            }
            else if (count2 > (count1*2)/2)
            {
                printf("%i " ,i-=1);
            }
            else{
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