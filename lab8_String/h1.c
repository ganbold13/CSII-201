#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    gets(s);
    int count =0;
    char * token = strtok(s, " ");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }    
    printf("%d", count);
}