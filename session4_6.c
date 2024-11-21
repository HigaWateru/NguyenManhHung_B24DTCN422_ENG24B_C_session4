#include <stdio.h>
#include<math.h>
long long a,b,soDien;
int main()
{
    printf("Nhap chi so cong to dau thang ");
    scanf("%lld",&a);
    printf("Nhap chi so cong to cuoi thang ");
    scanf("%lld",&b);
    soDien=b-a;
    printf("Gia dien tieu thu trong thang: ");
    if(soDien>=200)printf("%lld",soDien*30000);
    else if(soDien>=150)printf("%lld", soDien*25000);
    else if(soDien>=100)printf("%lld", soDien*20000);
    else if(soDien>=50)printf("%lld", soDien*15000);
    else printf("%lld", soDien*10000);
}