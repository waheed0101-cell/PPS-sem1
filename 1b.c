#include <stdio.h>
void main()
{
    int n,i,arm,rem,temp;
    arm=0;
    printf("enter no");
    scanf("%d",&n);
    temp=n;
    while(n!=0);
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;

    }
    if(arm==temp)
        printf("given number is armstrong");
    else
        printf("given number is not armstrong");

}
