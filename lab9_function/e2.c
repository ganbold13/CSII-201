#include <stdio.h>
void print(int a[], int n);
int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int a[n],b[m];
    print(a,n);
    print(b,m);
}
void print(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
        printf("\n");
}
