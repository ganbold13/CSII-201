#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    gets(str);
    int count=0,i,l;
    l = strlen(str);
    for(i=0; i<l; i++){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                count++;
            }}}