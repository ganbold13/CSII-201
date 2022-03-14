#include <stdio.h>
int count(int);
int main(){
    int n,r;
    printf("Toog oruul\n");
    scanf("%d", &n);
    r = count(n);
    printf("%d toonii huwaagchdiin too ni %d", n,r);
}
int count(int n){
    int i,c=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0)
            c++;   
    }
    return c;
}