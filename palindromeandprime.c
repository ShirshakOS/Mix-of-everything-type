#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp, rem,rev=0,count=0,i;
    temp = n;
    while(n!=0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
    printf("The number is a palindrome\n");
   else printf("The number is not palindrome\n");
   //check prime or not
   for(i=1;i<=temp;i++)
    {
        if(temp%i==0)
        count++;
    }
    if(count==2)
    printf("The number is a prime number");
    else printf("The number is not a prime number\n");

}