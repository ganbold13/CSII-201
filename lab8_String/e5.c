#include <stdio.h>
#include <string.h>
int main(){
    char s1[100];
    char s2[100];
    scanf("%s%s", s1,s2);
    int i,j,k,l;
    i = strlen(s1);
    j = strlen(s2);
    char r[i+j];
    for(k=0;k<i;k++){
        r[k]=s1[k];
    }
    for(k=i,l=0;k<(i+j),l<j;k++,l++){
        r[k]=s2[l];
    }
    r[i+j]='\0';
    printf("%s", r);
}