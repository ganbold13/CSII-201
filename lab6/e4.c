#include <stdio.h>
int main(){
    int n,i,x,k=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(x == a[i]){
            k=k+1;
            printf("%d-r element\n", i+1);
        } else{
            k=k;
        }
    }
    if(k==0){
        printf("-1");
    }
}