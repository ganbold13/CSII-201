#include <stdio.h>
#include <string.h>
int main(){
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int i;
    i = strcmp(str1,str2);
    if(i==0){
        printf("Ijilhen ug");
    } else{
        printf("Uur ug");
    }
}