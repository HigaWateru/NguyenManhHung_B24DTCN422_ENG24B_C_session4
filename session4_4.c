#include <stdio.h>
#include<math.h>
long long month;
int main()
{
    scanf("%lld",&month);
    switch(month){
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 ngay");
        break;
      case 4: case 6: case 9: case 11:
        printf("30 ngay");
        break;
      case 2:
        printf("28 hoac 29 ngay");
        break;
      default: printf("du lieu nhap vao khong hop le");
    }
}