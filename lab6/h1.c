#include <stdio.h>
int main(){
    int n,m,i,j,k=1;
    scanf("%d%d", &n,&m);
    int a[n];
    int b[m];
    int l = m+n;
    int c[l];
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0,j=n;i<m && j<l; i++,j++){
        c[j]=b[i];
    }
    for(i = 0; i < l; i++) {       
        for(j = i+1; j < l; j++) {
            if(c[i] == c[j]){
               break;
            }
        }
        if(j == l)
           printf("%d ", c[i]);
    }
}