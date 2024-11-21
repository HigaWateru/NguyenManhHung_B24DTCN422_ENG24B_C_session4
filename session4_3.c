#include<stdio.h>
#include<math.h>
long long n;
int main(){
  scanf("%lld",&n);
  if(n%15==0)printf("%lld chia het cho 3 va 5", n);
  else if(n%5==0) printf("%lld chia het cho 5", n);
  else if(n%3==0) printf("%lld chia het cho 3", n);
  else printf("%lld khong chia het cho 3 va 5", n);
}