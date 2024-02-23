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
                printf("%c " ,count2+64);
                *ptr = count2;
                
            }
            else if (count2 > (count1*2)/2)
            {
                printf("%c " ,(i-=1)+64);
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
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/