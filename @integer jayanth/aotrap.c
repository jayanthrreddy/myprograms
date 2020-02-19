#include<stdio.h>
#include<math.h>
float main()
{
float a, b, h, area;
printf("enter the a:\n");
scanf("%f", &a);
printf("enter the b:\n");
scanf("%f", &b);
printf("enter the h:\n");
scanf("%f", &h);
area=0.5*(a+b)*h;
printf("area of a rectangle=%.2f\n",area);
}

