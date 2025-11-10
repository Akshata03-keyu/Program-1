#include <stdio.h>
int main()
{
 float m1,m2,m3,total,average;
 char grade;
 printf("enter marks for three subjects (out of 100):");//Arithmetic operation
 scanf("%f %f %f",&m1,&m2,&m3);
 //Arithmetic operations
 total=m1+m2+m3;
 average=total/3;
 //Display total and average
 printf("\ntotal marks=%.2f",total);
 printf("\average marks=%.2f",average);
 //Determine grade using if-else
 if(average>=90)
    grade='A';
 else if(average>=80)
         grade='B';
 else if(average>=70)
   grade='C';
 else if(average>=60)
    grade='D';
    else if(average>=50)
        grade='E';
else
    grade='F';
    //Display grade
    printf("\n Grade=%c",grade);
    //Determine Pass/Fail
    if (average>=50)
        printf("\nResult:Pass\n");
    else
        printf("\nResult:FAIL\n");
    return 0;
}
