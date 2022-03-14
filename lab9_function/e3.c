#include <stdio.h>
int max(int a[], int n);
int main(){
    int n,j;
    scanf("%d", &n);
    int a[n];
    for(j=0;j<n;j++){
        scanf("%d", &a[j]);
    }
    printf("%d", max(a,n));
}
int max(int a[], int n){
    int i,max=0;
    for(i=0;i<n;i++){
        if(max < a[i])
            max=a[i];
    }
    return max;
}