#include <stdio.h>
int main(){
    int a=1, b=0;
    do{
        b= b+a;
        printf("%d",b);
        a++;
    } while (a>=5);
}