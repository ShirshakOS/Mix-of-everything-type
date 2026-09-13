#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the range:\n");

    printf("Start: ");
    scanf("%d", &a);

    printf("End: ");
    scanf("%d", &b);

    int count;

    for(int i = a; i <= b; i++)
    {
        count = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {   
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}