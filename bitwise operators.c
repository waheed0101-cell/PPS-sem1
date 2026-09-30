#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("bitwise operator AND:%d \n",a&b);
    printf("bitwise operator or:%d \n",a|b );
    printf("bitwise operator left shift:%d \n",a<<b);
    printf("bitwise operator right shift:%d \n",a>>b);
    printf("bitwise operator XOR:%d \n",a^b);

    return 0;
}
