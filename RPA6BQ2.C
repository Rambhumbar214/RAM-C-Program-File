#include<stdio.h>
#include<math.h>
int main()
{
int number,result_sqrt,result_power;
int x,y;
printf("enter a number:");
scanf("%d",&number);
result_sqrt = sqrt(number);
printf("square root of %d: %d\n",number,result_sqrt);
printf("enter values of x and y (space-separated) :");
scanf("%d %d",&x,&y);
result_power=pow(x,y);
printf("%d raised to the power of %d: %2lf\n",x,y,result_power);
return 0;
}