#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    gets(str);
    int count=0,i,l,maxCount=0,zai,ehlehZai=0,wlen=0;
    l = strlen(str);
    for(i=0; i<l; i++){
        if(str[i] != ' '){
            wlen++;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                count++;
            }
        } else {
            if(maxCount < count){
                maxCount=count;
                ehlehZai=i-wlen;
                zai=i;
            }
            count=0;
            wlen=0;
        } 
    }
    for(i=ehlehZai;i<zai;i++)
        printf("%c", str[i]);
}