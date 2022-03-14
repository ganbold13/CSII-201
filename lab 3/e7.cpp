//Dasgal_7 ganbold
#include <stdio.h>
int main(){
    int x,i=0;
    scanf("%d", &x);
    while(x > 0){
        x = x/10;
        i++;
    }
    printf("%d",i);
}