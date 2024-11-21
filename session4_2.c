#include<stdio.h>
#include<math.h>
long long n;
int main(){
  scanf("%lld",&n);
  if(n%2==0)printf("%lld la so chan", n);
  else printf("%lld la so le", n);
}