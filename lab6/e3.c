#include <stdio.h>
int main (){
    int n,m,l,i,j;
    scanf("%d%d", &n,&m);
    int a[n];
    int b[m];
    l=m+n;
    int c[l];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0, j=n;j<l && i<m;i++,j++){
        c[j]=b[i];
    }
    for(i=0;i<l;i++){
        printf("%d ", c[i]);
    }

}