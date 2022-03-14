#include <stdio.h>
int main(){
    int n, i;
    scanf ("%d", &n);
    double f;
    for(i=0;i<=n;i++){
        f = 1.8 * i + 32;
        printf("%d %.1f\n", i,f);
    }
}