#include <stdio.h>
int main(){
    int n,m,i,j,x,k=0;
    scanf("%d%d", &n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &x);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(x == a[i][j]){
                k=k+1;
                printf("%d-r mor %d-r bagana\n", i+1,j+1);
            } else{
                k=k;
            }
        }
    }
    if(k==0){
        printf("-1,-1");
    }
}