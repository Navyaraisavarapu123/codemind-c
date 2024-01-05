#include<stdio.h>
int main()
{
    float cp,sp,l;
    scanf("%f%f%f",&cp,&sp,&l);
    l=cp-sp;
    printf("%.2f",(l/cp*100));
}