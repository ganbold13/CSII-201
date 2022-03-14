#include <stdio.h>
int main(){
    char s[]= "hello";
    char s2[20] = "MUIS-iihaan";
    int i;
    for(i=0; i<5;i++){
        s2[i]=s[i];
    }
    s2[5]='\0';
    printf("%s", s2);
    return 0;
}