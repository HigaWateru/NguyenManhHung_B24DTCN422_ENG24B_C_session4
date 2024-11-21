#include<stdio.h>
#include<math.h>
long long a,b,c;
int main(){
    printf("Nhap lan luot 3 canh tam giac: ");
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)printf("La 3 canh tam giac");
    else printf("Khong phai 3 canh tam giac");
}