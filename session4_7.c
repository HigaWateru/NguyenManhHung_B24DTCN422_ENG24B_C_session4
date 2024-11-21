#include <stdio.h>
#include<math.h>
long long year;
int main()
{
    printf("Nhap nam ");
    scanf("%lld",&year);
    if((year%4==0&&year%100!=0)||year%400==0)printf("Nam nhuan");
    else printf("Khong phai nam nhuan");
}