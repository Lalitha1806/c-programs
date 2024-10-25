// calculating the roots of quadratic equations
#include <stdio.h>
#include<math.h>
int main() 
{
    int a,b,c,d;
    float r1,r2;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        printf("The roots are real & distinct ");
        r1=-b+sqrt(a)/(2*a);
        r2=-b-sqrt(a)/(2*a);
        printf("The values of r1&r2:%f",&r1,&r2);
    }
    else if(d<0)
    {
        printf("The roots are real & imaginary");
    }
    else
    {
        printf("The roots are real & equal");
        r1=r2=-b/(2*a);
        printf("The values of r1&r2:%f",&r1,&r2);
    }
    return 0;
}
