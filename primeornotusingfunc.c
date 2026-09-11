#include<stdio.h>
void primeornot(int a)
{
    int count=0;
    int i,j;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count == 2)
    {
        printf("The number is prime\n");
    }
    else printf("The number is not prime");
}
int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    primeornot(a);
    return 0;
}
