#include <stdio.h>
#include <string.h>
int is_valid(char pwd[]);
int main(){
    char pwd[100];
    int l, r;
    gets(pwd);
    r = is_valid(pwd);
    switch (r)
    {
    case 1:
        printf("6-s doosh urttai bna\n");
        break;
    case 2:
        printf("Tom useg alga\n");
        break;
    case 3:
        printf("3-s deesh toonii number oruulna uu\n");
        break;
    case 4:
        printf("Tusgai temdegt oruul\n");
        break;
    default:
        printf("Password is valid");
        break;
    }
}
int is_valid(char pwd[]){
    int l,i,upper=0,num=0,sp=0;
    l = strlen(pwd);
    if(l< 6)
        return 1;
    for(i=0;i<l;i++){
        if(pwd[i] >='A' && pwd[i]<= 'Z')
            upper++;
    }
    if(upper ==0)
        return 2;
    for(i=0;i<l;i++){
        if(pwd[i] >='0' && pwd[i]<= '9')
            num++;
    }
    if(num < 3)
        return 3;
    for(i=0;i<l;i++){
        if(pwd[i] =='?' || pwd[i] == '!' || pwd[i] == '$'|| pwd[i] == '*'|| pwd[i] == '(' || pwd[i] == ')' || pwd[i] == '-' || pwd[i] == '+' || pwd[i] == '#')
            sp++;
    }
    if(sp == 0)
        return 4;
    return 0;
}