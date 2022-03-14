#include <stdio.h>
#include <string.h>
int count(char s[]);
int main(){
    char a[1000];
    int b,r;
    printf("Temdegt moriig oruulna uu\n");
    gets(a);
    b = strlen(a);
    a[b] = '\0';
    r = count(a);
    printf("Egshgiin too: %d\n", r); 
}
int count(char s[]){
    int i,l,c=0;
    l = strlen(s);
    for(i=0;i<l;i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            c++;
        }
    }
    return c;
}
