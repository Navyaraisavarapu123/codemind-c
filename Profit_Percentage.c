#include<stdio.h>
int main()
{
    float cp,sp,p;
    scanf("%f%f",&cp,&sp);
    p=sp-cp;
    printf("%.2f",(p/cp)*100);
}