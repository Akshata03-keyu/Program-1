#include <stdio.h>
int main(void)
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0)
    printf("\Multiplication Table of %d;\n",n);
    {
    for(int i=1;i<=10;i++)

        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
