#include<stdio.h>
int main()
{
    double first, second, temp;
    printf("enter first number:");
    scanf("%lf", &first);
    printf("enter second number:");
    scanf("%lf", &second);
    temp = first;
    first = second;
    printf("\n after swapping,first number=%.2lf\n",first);
    printf("after swapping,second number=%.2lf\n",second);
    return0;
}

