#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i,j,count;
    int rem;
    int temp = n;
    int countp=0;
    while(n!=0)
    {
        rem = n%10;
        count=0;
        for(i=1;i<=rem;i++)
        {
            if(rem%i==0)
            count++;
        }
        if(count==2)
        {
            countp++;
        }
        n=n/10;
    }
    printf("The number of prime digits in the number %d is %d",temp,countp);
    return 0;
}