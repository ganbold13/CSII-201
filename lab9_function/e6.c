#include <stdio.h>
int prime_range(int,int);
int prime(int);
int A[100];
int c=0;
int main(){
    int i,l,a,b;
    scanf("%d%d", &a,&b);
    A[100],l = prime_range(a,b);
    for(i=0; i<l;i++){
        printf("%d ", A[i]);
    }
}
int prime(int a){
    int i;
    for(i=2;i<a;i++){
        if(a%i==0)
            return 0;
    }
    return a;
}
int prime_range(int a,int b){
    int i,j,c=0;
    for(i=a;i<=b;i++){
        j=prime(i);
        if(j!=0){
            A[c]=j;
            c++;
        }
    }
    return A[c],c;
}