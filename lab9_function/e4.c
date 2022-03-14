#include <stdio.h>
int min(int,int);
int min5(int,int,int,int,int);
int main(){
    int num1,num2,num3,num4,num5;
    scanf("%d%d%d%d%d", &num1,&num2,&num3,&num4,&num5);
    printf("%d", min5(num1,num2,num3,num4,num5));
}
int min(int a,int b){
    if(a>b)
        return b;
    return a;
}
int min5(int a,int b,int c,int d,int e){
    int minimium;
    minimium = min(min(min(min(a,b),c),d),e);
    return minimium;
}