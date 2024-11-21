#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[5];
int cmp(const void *a, const void *b){
    int *x=(int*)a;
    int *y=(int*)b;
    if(*x<*y)return -1;
    return 1;
}
int main(){
    scanf("%d%d%d",&a[1],&a[2],&a[3]);
    qsort(a,4,sizeof(int),cmp);
    printf("%d %d %d",a[1],a[2],a[3]);
}