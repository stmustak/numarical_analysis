/*
Topic=Trapezoidal law
Question: Find the value of folllowing integration of (1/1+x^2)dx with the interval of 0 to 1. Take sub interval(n)= 100
this program is writtin by Mustak Ahmed on 10-06-2020
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float f(float);
    float f(float x)
{
    float k;
    k=1/(1+x*x);
        return k;
}


void main()                                           
{
    int n,i;
    float a,b,h,s=0,t;

    printf("Enter the lower limit:");
    scanf("%f",&a);

    printf("Enter the Upper limit:");
    scanf("%f",&b);

    printf("Enter the total number of subinterval:");
    scanf("%d",&n);

    h=(b-a)/n;

    for(i=1;i<=(n-1);i++)
    s=s+f(a+i*h);

    t=h/2*(f(a)+f(b)+2*s);
    printf("The Value of the Integral is: %f",t);

    getch();
    }



