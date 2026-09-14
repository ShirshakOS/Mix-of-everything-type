#include<stdio.h>
int main()
{
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    int sum=0,rem;
    while(1)
    {
        rem = n%10;
        sum += rem;
        n = n/10;
        if(n==0)
        {
            break;
        }
    }
    printf("The sum untill last digit is %d",sum);
    return 0;
}