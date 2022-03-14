#include <stdio.h>
int is_palindrom(int);
int main(){
    int a,b;
    scanf("%d", &a);
    b=is_palindrom(a);
    if(b==1)
        printf("%d too ni palindrom.", a);
    else   
        printf("%d too ni palindrom bish.", a);
}
int is_palindrom(int a){
    int c=0,b=a;
    while (a>0)
    {
        c=c*10 + a%10;
        a = (a-a%10)/10;
    }
    if(c == b)   
        return 1;
    return 0; 
}