#include <stdlib.h>
#include <stdio.h>
int *get_array(int n, int value);
int main(){
    int *a , i;
    a=get_array(4,3);
    for(i=0;i<4;i++)
        printf("%d ", a[i]);
    free(a);
}
int *get_array(int n, int value){
    int *p;
    int i;
    p=malloc(sizeof(int)*n);
    if(p==NULL)
        exit(0);
    for(i=0;i<n;i++)
        p[i]=value;
    
    return p;
}