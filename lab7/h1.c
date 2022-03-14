#include <stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d%d", &n,&m);
    int a[n][m];
    for(i=0;i<=n;i++){
        for(j=0;j<m;j++){
            a[i][j]=i+1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}