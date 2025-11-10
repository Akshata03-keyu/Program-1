#include <stdio.h>
int main()
{
int number;
printf("Enter an integer:");
scanf("%d", &number);
if (number<0){
        printf("You entered a negative number:%d\n",number);
}
else if(number==0){
        printf("You entered zero.Zero is neither positive nor negative.\n");
}
return 0;
}

