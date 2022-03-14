#include <stdio.h>
int main(){
    int n;
    printf("100000-aas ih too oruulna uu!\n");
    scanf("%d", &n);
    if(n%2 == 0){
        int ld;
        ld = n%100;
        if(ld%4 == 0){
            printf("Tegsh, 4-t huwaagdana");
        } else{
            printf("Tegsh, 4-t huwaagdahgui");
        }

    } else{
        int s =0;
        while(n > 0){
            s= s+n%10;
            n =(n - n%10)/10;
        }
        if(s%3 ==0){
            printf("Sondgoi, 3-t huwaagdana");
        } else{
            printf("Sondgoi, 3-t huwaagdahgui");
        }
    }
}