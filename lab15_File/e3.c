#include <stdio.h>
#include <stdlib.h>
int * find_divisors(int n){
    int *p, i, j=0;
    int a[100];
    for(i=0;i<n;i++){
        if(n%i==0){
            a[j]=i;
            j++;
        }
    }
    printf("%d\n", j);
    p = malloc(sizeof(int)*j);
    if(p==NULL){
        printf("Sanah oi hureltssengui\n");
        exit(1);
    }
    p[0] = j;
    for(i=0;i<j;i++)
        p[i+1] = a[i];
    return p;
}
int main(){
    int *a,i;
    
    a=find_divisors(6);
    for(i=0;i<sizeof(a);i++){
        printf("%d ", a[i]);
    }
    free(a);
}