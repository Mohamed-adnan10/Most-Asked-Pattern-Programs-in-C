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
        for (count2 = size+4; count2 >= count1; count2--)
        {
            printf("*");
        }
        for (count3 = 1; count3 <= count1; count3++)
        {
            printf("%i*",count1);
        }
        for (count2 = size+3; count2 >= count1; count2--)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}

/*

enter number of size :5
*********1*********
********2*2********
*******3*3*3*******
******4*4*4*4******
*****5*5*5*5*5*****

*/