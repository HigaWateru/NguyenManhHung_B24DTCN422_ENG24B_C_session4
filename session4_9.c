#include<stdio.h>
#include<math.h>
long long day,month,year;
void checkDay(long long n){
    if(day>n)printf("Du lieu nhap vao khong hop le");
    else printf("Du lieu nhap vao hop le");
}
int main(){
    printf("Nhap ngay: ");
    scanf("%lld",&day);
    printf("Nhap thang: ");
    scanf("%lld",&month);
    printf("Nhap nam: ");
    scanf("%lld",&year);
    if((year%4==0&&year%100!=0)||year%400==0)year=1;
    else year=0;
    switch(month){
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        checkDay(31);
        break;
      case 4: case 6: case 9: case 11:
        checkDay(30);
        break;
      case 2:
        if(year==1)checkDay(29);
        else checkDay(28);
        break;
      default: printf("Du lieu nhap vao khong hop le");
    }
}