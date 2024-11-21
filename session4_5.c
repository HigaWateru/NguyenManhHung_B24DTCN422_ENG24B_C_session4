#include <stdio.h>
#include<math.h>
long long a,b,c,Max,Min;
int main()
{
    scanf("%lld%lld%lld",&a,&b,&c);
    Max=fmax(a,b);
    Min=fmin(a,b);
    if(c>Min&&c<Max)printf("So thu 3 co nam trong khoang 2 so dau");
    else printf("So thu 3 khong nam trong khoang 2 so dau");
}