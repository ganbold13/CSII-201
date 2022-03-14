#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
int join(int a[], int b[], int n,int m){
    int l=n+m,i,j;
    int c[l];
    for(i=0;i<n;i++){
        c[i] = a[i];
    }
    for(i=n,j=0;i<l && j<m;i++,j++){
        c[i] = b[j];
    }
    return c[l],l;
}
void read(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
}
void print(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
        printf("\n");
}
int main(){
    int a[100], b[100], n,m,k;
    scanf("%d", &n);
    scanf("&d", &m);
    read(a,n);
    print(a,n);
    read(b,m);
    print(b,m);
    a, k = join(a,b,n,m);
    print(a,k);
    return 0;
}