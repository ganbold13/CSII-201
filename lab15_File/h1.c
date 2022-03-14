#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *get_array_from_file(char fname[]){
    FILE *file = fopen(fname, "r");
    char txt[100];
    fread(txt, sizeof(txt), 1, file);
    fclose(file);
    int i,j=1,c=0;
    for(i=0; i<strlen(txt)+1; i++){
        if(txt[i] >= '0' && txt[i] <= '9'){
            c++;
        }
    }
    printf("%d\n", c);
    int a[c];
    a[0]=c;
    for(i=0; i<strlen(txt)+1; i++){
        if(txt[i] >= '0' && txt[i] <= '9'){
            a[j]=txt[i]-48;
            j++;
        }
    }
    for(i=0;i<c;i++){
        printf("%d ", a[i]);
    }
}
int main(){
    get_array_from_file("fname");
}