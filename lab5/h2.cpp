#include <stdio.h>
int main(){
    int a,b,i,max, maxHuw;
    scanf("%d%d", &a,&b);
    max = (a > b)*a + (b > a) * b;
    for(i = 1; i <= (max/2); i++){
        if(a%i == 0 && b%i == 0){
            maxHuw = i;
        }
    }
    printf("Hamgiin ih eronhii huwaagch bol %d", maxHuw);
}