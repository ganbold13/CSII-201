//Homework_1 ganbold
#include <stdio.h>
int main(){
    int x,a,b,c,d;
    scanf("%d", &x);
    a = x%10;
    x = (x-a)/10;
    b = x%10;
    x = (x-b)/10;
    c = x%10;
    x = (x-c)/10;
    d = x%10;
    if(a==d && b==c){
        printf("1");
    } else{
        printf("0");
    }
}