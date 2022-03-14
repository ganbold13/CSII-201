#include <stdio.h>
int count(int, int A[]);
int main(){
    int n,r;
    int B[100];
    printf("Toog oruul\n");
    scanf("%d", &n);
    r = count(n, B);
    printf("%d toonii huwaagchdiin too ni %d\n", n,r);
    for(int i=0;i<r;i++){
        printf("%d ", B[i]);
    }
}
int count(int n, int A[]){
    int i,j=0,c=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
              c++;
              A[j] = i;
              j++;
        }
    }
    return c;
}