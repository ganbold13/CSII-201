#include <stdio.h>
int digit_sum(int);
int main(){
    int a,i;
    scanf("%d", &a);
    int b = digit_sum(a);
    for(i=1;i<=a;i++){
        if(i%b==0)
            printf("%d ", i);
    }
}
int digit_sum(int a){
    int sum=0;
    while(a>0){
        sum+=a%10;
        a=(a-a%10)/10;
    }
    return sum;
}