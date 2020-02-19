#include<stdio.h>
#include<math.h>
float main()
{
float radius, theta,area;
printf("enter the radius:\n");
scanf("%f", &radius);
printf("enter the theta:\n");
scanf("%f", &theta);
area=0.5*radius*radius*theta;
printf("area of a rectangle=%.2f\n",area);
}

