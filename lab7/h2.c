#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            a[i][j]=j+i+1;
            if(a[i][j]>n)
                a[i][j]=n-(a[i][j]-n);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}