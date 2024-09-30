// area of a triangle by using heron's formula
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float s,area;
    printf("Enter a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of a triangle is:%f",area);
    return 0;
}
