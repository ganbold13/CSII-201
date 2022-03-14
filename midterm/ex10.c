#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i,l,sum=0;
    scanf("%s", s);
    l=strlen(s);
    for(i=0;i<l;i++){
        if((s[i] >= '0') && (s[i]<= '9')){
            sum+= (s[i]-'0');
        }
    }
    printf("%d", sum);

}