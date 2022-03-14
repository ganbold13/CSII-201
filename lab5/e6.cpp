#include <stdio.h>
int main(){
    int N, i, s=0;
    scanf("%d", &N);
    while( N >0 ){
        s = s + N%10;
        N = (N-N%10)/10;
    } 
    printf("%d", s);
}