#include <stdio.h>
int is_even(int);
int main(){
    int n,a;
    scanf("%d", &n);
    a = is_even(n);
    if(a==1)
        printf("%d too ni tegsh too ym.\n", n);
    else 
        printf("%d too ni sondgoi too ym.\n", n);
    for(int i=1;i<=n;i+=2){
        printf("%d\n", i);
    }
}
int is_even(int x){
    if(x%2==0)
        return 1;
    else  
        return 0;
}