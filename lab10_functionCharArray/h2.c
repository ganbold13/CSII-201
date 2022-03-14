#include <string.h>
#include <stdio.h>
char ch_user[4][100] = {
    "bat",
    "dorj",
    "bold", 
    "tsetsgee"
};
char ch_pass[4][100] = {
    "123456",
    "password",
    "pass247",
    "justinbeaber"
};
int check(char u[], char p[]){
    int i;
    for(i=0;i<4;i++){
        if(strcmp(u,ch_user[i])==0 && strcmp(p,ch_pass[i])==0 ){
            return 1;
        }
    }
    return 0;
}
int main(){
    char u[100], p[100];
    int r;
    scanf("%s%s", u, p);
    r = check(u,p); 
    if(r==1)
        printf("Access granted\n");
    else 
        printf("Access Deniad");
        
}

    